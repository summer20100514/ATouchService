#ifndef __PROC_KEYBOARD_H__
#define __PROC_KEYBOARD_H__

#define EVENT_K_DOWN  0x00
#define EVENT_K_UP  0x01
#define EVENT_K_KEEP  0x02

#define KB_KANA  0x00
#define KB_VOLUME_DOWN  0x01
#define KB_VOLUME_UP  0x02
#define KB_VOLUME_MUTE  0x03
#define KB_A  0x04
#define KB_B  0x05
#define KB_C  0x06
#define KB_D  0x07
#define KB_E  0x08
#define KB_F  0x09
#define KB_G  0x0A
#define KB_H  0x0B
#define KB_I  0x0C
#define KB_J  0x0D
#define KB_K  0x0E
#define KB_L  0x0F
#define KB_M  0x10
#define KB_N  0x11
#define KB_O  0x12
#define KB_P  0x13
#define KB_Q  0x14
#define KB_R  0x15
#define KB_S  0x16
#define KB_T  0x17
#define KB_U  0x18
#define KB_V  0x19
#define KB_W  0x1A
#define KB_X  0x1B
#define KB_Y  0x1C
#define KB_Z  0x1D
#define KB_1  0x1E
#define KB_2  0x1F
#define KB_3  0x20
#define KB_4  0x21
#define KB_5  0x22
#define KB_6  0x23
#define KB_7  0x24
#define KB_8  0x25
#define KB_9  0x26
#define KB_0  0x27
#define KB_ENTER  0x28
#define KB_ESCAPE  0x29
#define KB_BSPACE  0x2A
#define KB_TAB  0x2B
#define KB_SPACE  0x2C
#define KB_MINUS  0x2D
#define KB_EQUAL  0x2E
#define KB_LBRACKET  0x2F
#define KB_RBRACKET  0x30
#define KB_BSLASH  0x31
#define KB_NONUS_HASH  0x32
#define KB_SCOLON  0x33
#define KB_QUOTE  0x34
#define KB_GRAVE  0x35
#define KB_COMMA  0x36
#define KB_DOT  0x37
#define KB_SLASH  0x38
#define KB_CAPSLOCK  0x39
#define KB_F1  0x3A
#define KB_F2  0x3B
#define KB_F3  0x3C
#define KB_F4  0x3D
#define KB_F5  0x3E
#define KB_F6  0x3F
#define KB_F7  0x40
#define KB_F8  0x41
#define KB_F9  0x42
#define KB_F10  0x43
#define KB_F11  0x44
#define KB_F12  0x45
#define KB_PSCREEN  0x46
#define KB_SCROLLLOCK  0x47
#define KB_PAUSE  0x48
#define KB_INSERT  0x49
#define KB_HOME  0x4A
#define KB_PGUP  0x4B
#define KB_DELETE  0x4C
#define KB_END  0x4D
#define KB_PGDOWN  0x4E
#define KB_RIGHT  0x4F
#define KB_LEFT  0x50
#define KB_DOWN  0x51
#define KB_UP  0x52
#define KB_NUMLOCK  0x53
#define KB_KP_SLASH  0x54
#define KB_KP_ASTERISK  0x55
#define KB_KP_MINUS  0x56
#define KB_KP_PLUS  0x57
#define KB_KP_ENTER  0x58
#define KB_KP_1  0x59
#define KB_KP_2  0x5A
#define KB_KP_3  0x5B
#define KB_KP_4  0x5C
#define KB_KP_5  0x5D
#define KB_KP_6  0x5E
#define KB_KP_7  0x5F
#define KB_KP_8  0x60
#define KB_KP_9  0x61
#define KB_KP_0  0x62
#define KB_KP_DOT  0x63
#define KB_NONUS_BSLASH  0x64
#define KB_APPLICATION  0x65
#define KB_KP_COMMA  0x66
#define KB_KP_EQUAL  0x67
#define KB_F13  0x68
#define KB_F14  0x69
#define KB_F15  0x6A
#define KB_F16  0x6B
#define KB_F17  0x6C
#define KB_F18  0x6D
#define KB_F19  0x6E
#define KB_F20  0x6F
#define KB_F21  0x70
#define KB_F22  0x71
#define KB_F23  0x72
#define KB_F24  0x73
#define KB_JYEN  0x74
#define KB_RO  0x75
#define KB_HENK  0x76
#define KB_MHEN  0x77
#define KB_LCTRL  0x78
#define KB_LSHIFT  0x79
#define KB_LALT  0x7A
#define KB_LGUI  0x7B
#define KB_RCTRL  0x7C
#define KB_RSHIFT  0x7D
#define KB_RALT  0x7E
#define KB_RGUI  0x7F
#define KB_NO  0x80


#define KB_LEFT_CTRL  0xA0
#define KB_LEFT_SHIFT  0xA1
#define KB_LEFT_ALT  0xA2
#define KB_LEFT_GUI  0xA3

#define KB_RIGHT_CTRL  0xA4
#define KB_RIGHT_SHIFT  0xA5
#define KB_RIGHT_ALT  0xA6
#define KB_RIGHT_GUI  0xA7




void proc_keyboard(char *buf, int len);
void set_move_xy(int x,int y);

#endif
