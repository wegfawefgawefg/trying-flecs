project('main', 'c',
    default_options: [
        'default_library=static',
        'optimization=3',
    ]
)
message('optimization level is ' + get_option('optimization'))

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : false)
pthread_dep = cc.find_library('pthread', required : false)

sdl2_dep = dependency('sdl2')
sdl2_ttf_dep = dependency('SDL2_ttf')
sdl2_image_dep = dependency('SDL2_image')
sdl2_mixer_dep = dependency('SDL2_mixer')

executable('main', 
    sources: [
        'main.c',
        'flecs.c',
    ],
    include_directories: [
    ],
    dependencies: [
        sdl2_dep,
        sdl2_image_dep,
        sdl2_ttf_dep,
        sdl2_mixer_dep,
        m_dep,
        pthread_dep,
    ],
)
