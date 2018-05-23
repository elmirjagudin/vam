#pragma once

typedef struct vam_handle_s vam_handle;

vam_handle*
vam_init(int width, int height);

void
vam_process_frame(vam_handle *vah, void *pixels);
