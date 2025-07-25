#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *settings;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *a;
    lv_obj_t *b;
    lv_obj_t *c;
    lv_obj_t *d;
    lv_obj_t *e;
    lv_obj_t *f;
    lv_obj_t *a_1;
    lv_obj_t *b_1;
    lv_obj_t *c_1;
    lv_obj_t *d_1;
    lv_obj_t *e_1;
    lv_obj_t *f_1;
    lv_obj_t *obj2;
    lv_obj_t *a_2;
    lv_obj_t *b_2;
    lv_obj_t *c_2;
    lv_obj_t *d_2;
    lv_obj_t *e_2;
    lv_obj_t *f_2;
    lv_obj_t *obj3;
    lv_obj_t *my_slider;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_SETTINGS = 2,
};

void create_screen_main();
void tick_screen_main();

void create_screen_settings();
void tick_screen_settings();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/