#pragma once

#include <dt-bindings/zmk/keys.h>

/*
 * German QWERTZ locale keycodes.
 * Assumes the host OS is configured for a German keyboard layout.
 * Keys are named by the character they produce.
 */

/* Unshifted keys */
#define DE_SZ    MINUS         /* ß  (HID: MINUS position) */
#define DE_U_UML LBKT          /* ü  (HID: LEFT_BRACKET position) */
#define DE_O_UML SEMI          /* ö  (HID: SEMICOLON position) */
#define DE_A_UML SQT           /* ä  (HID: APOSTROPHE position) */
#define DE_LABK  NON_US_BSLH   /* <  (HID: NON_US_BACKSLASH position) */
#define DE_MINS  FSLH          /* -  (HID: SLASH position) */
#define DE_HASH  BSLH          /* #  (HID: BACKSLASH position) */

/* Shifted keys */
#define DE_RABK  LS(NON_US_BSLH) /* > */
#define DE_UNDS  LS(FSLH)        /* _ */
#define DE_AMPS  LS(N6)          /* & */
#define DE_SLSH  LS(N7)          /* / */
#define DE_LPAR  LS(N8)          /* ( */
#define DE_RPAR  LS(N9)          /* ) */
#define DE_EQL   LS(N0)          /* = */
#define DE_ASTR  LS(RBKT)        /* * (Shift + +) */

/* AltGr keys */
#define DE_LBRC  RA(N7)          /* { */
#define DE_LBKT  RA(N8)          /* [ */
#define DE_RBKT  RA(N9)          /* ] */
#define DE_RBRC  RA(N0)          /* } */
#define DE_BSLH  RA(MINUS)       /* \ (AltGr + ß) */
#define DE_PIPE  RA(NON_US_BSLH) /* | (AltGr + <) */
#define DE_GRAVE RA(GRAVE)       /* ` (AltGr + ^, may be a dead key) */
