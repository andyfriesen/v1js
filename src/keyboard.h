extern char keyboard_map[128];
extern char last_pressed;
extern int keyboard_init(void);
extern void keyboard_close(void);
extern void keyboard_chain(int toggle);

/* Constants for keyboard scan-codes */

enum DOMScanCode {
    VK_UNDEFINED = 0x0,
    VK_RIGHT_ALT = 0x12,
    VK_LEFT_ALT = 0x12,
    VK_LEFT_CONTROL = 0x11,
    VK_RIGHT_CONTROL = 0x11,
    VK_LEFT_SHIFT = 0x10,
    VK_RIGHT_SHIFT = 0x10,
    VK_META = 0x9D,
    VK_BACK_SPACE = 0x08,
    VK_CAPS_LOCK = 0x14,
    VK_DELETE = 0x7F,
    VK_END = 0x23,
    VK_ENTER = 0x0D,
    VK_ESCAPE = 0x1B,
    VK_HOME = 0x24,
    VK_NUM_LOCK = 0x90,
    VK_PAUSE = 0x13,
    VK_PRINTSCREEN = 0x9A,
    VK_SCROLL_LOCK = 0x91,
    VK_SPACE = 0x20,
    VK_TAB = 0x09,
    VK_LEFT = 0x25,
    VK_RIGHT = 0x27,
    VK_UP = 0x26,
    VK_DOWN = 0x28,
    VK_PAGE_DOWN = 0x22,
    VK_PAGE_UP = 0x21,
    VK_F1 = 0x70,
    VK_F2 = 0x71,
    VK_F3 = 0x72,
    VK_F4 = 0x73,
    VK_F5 = 0x74,
    VK_F6 = 0x75,
    VK_F7 = 0x76,
    VK_F8 = 0x77,
    VK_F9 = 0x78,
    VK_F10 = 0x79,
    VK_F11 = 0x7A,
    VK_F12 = 0x7B,
    VK_F13 = 0xF000,
    VK_F14 = 0xF001,
    VK_F15 = 0xF002,
    VK_F16 = 0xF003,
    VK_F17 = 0xF004,
    VK_F18 = 0xF005,
    VK_F19 = 0xF006,
    VK_F20 = 0xF007,
    VK_F21 = 0xF008,
    VK_F22 = 0xF009,
    VK_F23 = 0xF00A,
    VK_F24 = 0xF00B
};

enum VScanCode {
    SCAN_ESC = 0x01,
    SCAN_1 = 0x02,
    SCAN_2 = 0x03,
    SCAN_3 = 0x04,
    SCAN_4 = 0x05,
    SCAN_5 = 0x06,
    SCAN_6 = 0x07,
    SCAN_7 = 0x08,
    SCAN_8 = 0x09,
    SCAN_9 = 0x0a,
    SCAN_0 = 0x0b,
    SCAN_MINUS = 0x0c,
    SCAN_EQUALS = 0x0d,
    SCAN_BACKSP = 0x0e,
    SCAN_TAB = 0x0f,
    SCAN_Q = 0x10,
    SCAN_W = 0x11,
    SCAN_E = 0x12,
    SCAN_R = 0x13,
    SCAN_T = 0x14,
    SCAN_Y = 0x15,
    SCAN_U = 0x16,
    SCAN_I = 0x17,
    SCAN_O = 0x18,
    SCAN_P = 0x19,
    SCAN_LANGLE = 0x1a,
    SCAN_RANGLE = 0x1b,
    SCAN_ENTER = 0x1c,
    SCAN_CTRL = 0x1d,
    SCAN_A = 0x1e,
    SCAN_S = 0x1f,
    SCAN_D = 0x20,
    SCAN_F = 0x21,
    SCAN_G = 0x22,
    SCAN_H = 0x23,
    SCAN_J = 0x24,
    SCAN_K = 0x25,
    SCAN_L = 0x26,
    SCAN_SCOLON = 0x27,
    SCAN_QUOTA = 0x28,
    SCAN_RQUOTA = 0x29,
    SCAN_LSHIFT = 0x2a,
    SCAN_BSLASH = 0x2b,
    SCAN_Z = 0x2c,
    SCAN_X = 0x2d,
    SCAN_C = 0x2e,
    SCAN_V = 0x2f,
    SCAN_B = 0x30,
    SCAN_N = 0x31,
    SCAN_M = 0x32,
    SCAN_COMA = 0x33,
    SCAN_DOT = 0x34,
    SCAN_SLASH = 0x35,
    SCAN_RSHIFT = 0x36,
    SCAN_GREY_STAR = 0x37,
    SCAN_ALT = 0x38,
    SCAN_SPACE = 0x39,
    SCAN_CAPS = 0x3a,
    SCAN_F1 = 0x3b,
    SCAN_F2 = 0x3c,
    SCAN_F3 = 0x3d,
    SCAN_F4 = 0x3e,
    SCAN_F5 = 0x3f,
    SCAN_F6 = 0x40,
    SCAN_F7 = 0x41,
    SCAN_F8 = 0x42,
    SCAN_F9 = 0x43,
    SCAN_F10 = 0x44,
    SCAN_NUMLOCK = 0x45,
    SCAN_SCRLOCK = 0x46,
    SCAN_HOME = 0x47,
    SCAN_UP = 0x48,
    SCAN_PGUP = 0x49,
    SCAN_GREY_MINUS = 0x4a,
    SCAN_LEFT = 0x4b,
    SCAN_PAD_5 = 0x4c,
    SCAN_RIGHT = 0x4d,
    SCAN_GREY_PLUS = 0x4e,
    SCAN_END = 0x4f,
    SCAN_DOWN = 0x50,
    SCAN_PGDN = 0x51,
    SCAN_INSERT = 0x52,
    SCAN_DEL = 0x53,
    SCAN_F11 = 0x57,
    SCAN_F12 = 0x58,
};
