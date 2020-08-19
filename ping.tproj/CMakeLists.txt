project(network_cmds-ping)

add_darling_executable(ping
	ping.c
	../ecnprobe/gmt2local.c
)

install(TARGETS netstat DESTINATION libexec/darling/sbin)

install(FILES ping.8 DESTINATION libexec/darling/usr/share/man/man8)
