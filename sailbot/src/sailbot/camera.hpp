#pragma once

namespace sailbot { namespace camera {
    // TODO: Documentation Comment
    static constexpr unsigned int width = 640, height = 480;
    // TODO: Documentation Comment
    bool open();
    // TODO: Documentation Comment
    unsigned char *read();
}} // namespace sailbot::camera
