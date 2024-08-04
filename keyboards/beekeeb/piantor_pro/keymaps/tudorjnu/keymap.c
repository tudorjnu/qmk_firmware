// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
    //,----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_PSCR,         KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,                                 KC_Y,            KC_U,            KC_I,            KC_O,            KC_P,            KC_CAPS,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_ESCAPE,       LALT_T(KC_A),    LGUI_T(KC_S),    LSFT_T(KC_D),    LCTL_T(KC_F),    KC_G,                                 KC_H,            RCTL_T(KC_J),    RSFT_T(KC_K),    RGUI_T(KC_L),    RALT_T(KC_SCLN), KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,                                 KC_N,            KC_M,            KC_COMMA,        KC_DOT,          KC_SLASH,        KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
                                                                KC_NO,           LT(1, KC_BSPC),  LT(2, KC_TAB),           TD(0),           LT(1, KC_SPACE), LT(2, KC_ENTER)
                                                             //`----------------+----------------+----------------'       `----------------+----------------+----------------'
    ),

    [1] = LAYOUT_split_3x6_3(
    //,----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           KC_QUOTE,        LSFT(KC_COMMA),  LSFT(KC_DOT),    LSFT(KC_QUOTE),  KC_GRAVE,                             LSFT(KC_7),      LSFT(KC_MINUS),  KC_LBRC,         KC_RBRC,         LSFT(KC_5),      KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           LSFT(KC_1),      KC_MINUS,        LSFT(KC_EQUAL),  KC_EQUAL,        LSFT(KC_3),                           LSFT(KC_BSLS),   LSFT(KC_SCLN),   LSFT(KC_9),      LSFT(KC_0),      KC_SCLN,         KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           LSFT(KC_6),      KC_KP_SLASH,     KC_KP_ASTERISK,  KC_BSLS,         LSFT(KC_2),                           LSFT(KC_GRAVE),  LSFT(KC_SLASH),  LSFT(KC_LBRC),   LSFT(KC_RBRC),   LSFT(KC_4),      KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
                                                                KC_NO,           KC_TRNS,         KC_TRNS,                 KC_TRNS,         KC_TRNS,         KC_TRNS
                                                             //`----------------+----------------+----------------'       `----------------+----------------+----------------'
    ),

    [2] = LAYOUT_split_3x6_3(
    //,----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           KC_9,            KC_8,            KC_7,            KC_6,            KC_5,                                 KC_HOME,         KC_PGDN,         KC_PGUP,         KC_END,          KC_NO,           KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           KC_4,            KC_3,            KC_2,            KC_1,            KC_0,                                 KC_LEFT,         KC_DOWN,         KC_UP,           KC_RIGHT,        KC_NO,           KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,           KC_NO,                                LALT(KC_LEFT),   RCTL(KC_PGDN),   RCTL(KC_PGUP),   LALT(KC_RIGHT),  KC_NO,           KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
                                                                KC_NO,           KC_TRNS,         KC_TRNS,                 KC_TRNS,         KC_TRNS,         KC_TRNS
                                                             //`----------------+----------------+----------------'       `----------------+----------------+----------------'
    ),

    [3] = LAYOUT_split_3x6_3(
    //,----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_F10,          KC_F9,           KC_F8,           KC_F7,           KC_F6,           KC_F5,                                KC_NO,           KC_VOLU,         KC_MUTE,         KC_VOLD,         KC_NO,           KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_F11,          KC_F4,           KC_F3,           KC_F2,           KC_F1,           KC_NO,                                KC_NO,           KC_MNXT,         KC_MPLY,         KC_MPRV,         KC_NO,           KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
       KC_F12,          KC_UNDO,         KC_CUT,          KC_COPY,         KC_PSTE,         KC_NO,                                KC_NO,           KC_BRIU,         KC_BRID,         KC_NO,           KC_NO,           KC_NO,
    //|----------------+----------------+----------------+----------------+----------------+----------------|                    |----------------+----------------+----------------+----------------+----------------+----------------|
                                                                KC_NO,           KC_TRNS,         KC_TRNS,                 KC_TRNS,         KC_TRNS,         KC_TRNS
                                                             //`----------------+----------------+----------------'       `----------------+----------------+----------------'
    )
};
