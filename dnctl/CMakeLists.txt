project(network_cmds-dnctl)

add_darling_executable(dnctl
	dnctl.c
)

install(TARGETS dnctl DESTINATION libexec/darling/usr/sbin)

install(FILES dnctl.8 DESTINATION libexec/darling/usr/share/man/man8)
