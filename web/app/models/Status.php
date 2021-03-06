<?php

/*
 * The Status Model
 * Link http://github.com/typefo/lamb
 * Copyright (C) typefo <typefo@qq.com>
 */

class StatusModel {
    public $db = null;
    public $rdb = null;
    
    public function __construct() {
        $this->db = Yaf\Registry::get('db');
        $this->rdb = Yaf\Registry::get('rdb');
    }

    public function inbound() {
        $result = array();
        $account = new AccountModel();

        foreach ($account->getAll() as $a) {
            $pid = $this->getPid($a['id'], 'client');
            if ($pid > 0 && is_dir('/proc/' . $pid)) {
                $result[$a['id']]['username'] = $a['username'];
                $result[$a['id']]['company'] = $a['company'];
                $result[$a['id']]['queue'] = $this->getQueue($a['id']);
                $result[$a['id']]['deliver'] = $this->getDeliver($a['id']);
                $result[$a['id']]['speed'] = $this->getSpeed($a['id'], 'client');
                $result[$a['id']]['error'] = $this->getError($a['id'], 'client');
            }
        }

        return $result;
    }

    public function outbound() {
        $result = array();
        $gateway = new GatewayModel();

        foreach ($gateway->getAll() as $g) {
            $result[$g['id']]['name'] = $g['name'];
            $result[$g['id']]['type'] = $g['type'];
            $result[$g['id']]['host'] = $g['host'];
            $result[$g['id']]['speed'] = $this->getSpeed($g['id'], 'gateway');
            $result[$g['id']]['error'] = $this->getError($g['id'], 'gateway');
            if (is_dir('/proc/' . $this->getPid($g['id'], 'gateway'))) {
                $result[$g['id']]['status'] = $this->getStatus($g['id'], 'gateway');
            } else {
                $result[$g['id']]['status'] = -1;
            }
        }

        return $result;
    }
    
    public function getPid($id = null, $type = 'client') {
        $id = intval($id);
        $pid = 0;
        $reply = $this->rdb->hGet($type . '.' . $id, 'pid');
        if ($reply !== false) {
            $pid = intval($reply);
        }

        return $pid;
    }

    public function getQueue($id = null) {
        $id = intval($id);
        $queue = 0;
        $reply = $this->rdb->hGet('client.' . $id, 'queue');
        if ($reply !== false) {
            $queue = intval($reply);
        }

        return $queue;
    }

    public function getSpeed($id = null, $type = 'client') {
        $id = intval($id);
        $speed = 0;
        $reply = $this->rdb->hGet($type . '.' . $id, 'speed');
        if ($reply !== false) {
            $speed = intval($reply);
        }

        return $speed;
    }

    public function getError($id = null, $type = 'client') {
        $id = intval($id);
        $error = 0;
        $reply = $this->rdb->hGet($type . '.' . $id, 'error');
        if ($reply !== false) {
            $error = intval($reply);
        }

        return $error;
    }

    public function getDeliver($id = null) {
        $id = intval($id);
        $deliver = 0;
        $reply = $this->rdb->hGet('client.' . $id, 'deliver');
        if ($reply !== false) {
            $deliver = intval($reply);
        }

        return $deliver;
    }

    public function getStatus($id = null, $type = 'client') {
        $id = intval($id);

        $status = -1;

        $reply = $this->rdb->hGet($type . '.' . $id, 'status');
        if ($reply !== false) {
            $status = intval($reply);
        }

        return $status;
    }
}
