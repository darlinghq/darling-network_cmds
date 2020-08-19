project(network_cmds-spray)

include_directories(
	../gen/spray.tproj
)

add_darling_executable(spray
	spray.c
	../gen/spray.tproj/spray_xdr.c
)

install(TARGETS spray DESTINATION libexec/darling/usr/sbin)

install(FILES spray.8 DESTINATION libexec/darling/usr/share/man/man8)
