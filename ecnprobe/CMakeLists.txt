project(network_cmds-ecnprobe)

add_darling_executable(ecnprobe
	capture.c
	ecn_probe.c
	ecn.c
	gmt2local.c
	history.c
	inet.c
	session.c
	support.c
)

target_link_libraries(ecnprobe
	pcap
)

install(TARGETS ecnprobe DESTINATION libexec/darling/usr/bin)

install(FILES ecnprobe.1 DESTINATION libexec/darling/usr/share/man/man1)
