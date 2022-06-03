#include <stdint.h>
#include <mshtmlc.h>
#include <unistd.h>
#include <stdio.h>
#include "xwiimote.h"

static uint16_t bboard_show_ext(const struct xwii_event *event)
{
    uint16_t w, x, y, z;

    w = event->v.abs[0].x;
    x = event->v.abs[1].x;
    y = event->v.abs[2].x;
    z = event->v.abs[3].x;

    uint16_t total = w + x + y + z;
    return total
}
static void loop()
{
    struct xwii_event event;
    while (True)
    {
        uint16_t weight = bboard_show_ext(&event);
        printf("Weight is: " + weight);
        sleep(1);
    }
}

void main(int argc, char **argv)
{
    loop();
}