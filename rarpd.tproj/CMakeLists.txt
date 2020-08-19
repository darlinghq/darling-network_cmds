project(network_cmds-rarpd)

add_compile_definitions(
	TFTP_DIR="/tftpboot"
)

add_darling_executable(rarpd
	rarpd.c
)

install(TARGETS rarpd DESTINATION libexec/darling/usr/sbin)

install(FILES rarpd.8 DESTINATION libexec/darling/usr/share/man/man8)
