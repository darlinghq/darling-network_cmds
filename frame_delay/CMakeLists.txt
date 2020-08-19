project(network_cmds-frame_delay)

add_darling_executable(frame_delay
	frame_delay.c
)

install(TARGETS frame_delay DESTINATION libexec/darling/usr/bin)

install(FILES frame_delay.8 DESTINATION libexec/darling/usr/share/man/man8)
