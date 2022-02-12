#include <stdio.h>
#include <flecs.h>

typedef struct {
    double x;
    double y;
} Position, Velocity;

int main(int argc, char *argv[])
{
    ecs_world_t *world = ecs_init();

    ECS_COMPONENT(world, Position);
    ecs_entity_t e = ecs_new_id(world);
    ecs_set(world, e, Position, {.x = 1, .y = 2});

    const Position *p = ecs_get(world, e, Position);
    printf("%f %f\n", p->x, p->y);

    ecs_set(world, e, Position, {.x = 3, .y = 4});
    

    // ecs_entity_t player = ecs_entity_init(world, &(ecs_entity_desc_t) { .name = "player" });
    // alive = ecs_is_alive(world, e);
    // ecs_entity_t ef = ecs_lookup(world, "player");
    // char *name = ecs_get_name(world, e);

    ecs_fini(world);
    return 0;
}