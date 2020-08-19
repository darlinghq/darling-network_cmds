project(network_cmds-ip6addrctl)

add_darling_executable(ip6addrctl
	ip6addrctl.c
)

install(TARGETS ip6addrctl DESTINATION libexec/darling/usr/bin)

install(FILES ip6addrctl.8 DESTINATION libexec/darling/usr/share/man/man8)
