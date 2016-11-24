project(network_cmds)

cmake_minimum_required(VERSION 2.4.0)

# Automatically escape macros
cmake_policy(SET CMP0005 NEW)

include(darling_exe)

include_directories(
	${DARLING_TOP_DIRECTORY}/src/libc/include/FreeBSD
	${DARLING_TOP_DIRECTORY}/platform-include
	${DARLING_TOP_DIRECTORY}/kernel-include
)

add_definitions(
	-DUSE_RFC2292BIS=1
	-D__APPLE_USE_RFC_3542=1
	-D__APPLE_API_OBSOLETE=1
	-DPRIVATE
	-D_DARWIN_C_SOURCE
	-DKERNEL_PRIVATE
	-D__APPLE__
)

# Hide warnings
add_definitions(
	-Wno-visibility
	-Wno-incompatible-pointer-types
)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -nostdinc -fwrapv -fPIC -ggdb")
set(CMAKE_SHARED_LINKER_FLAGS "-nodefaultlibs -nostdlib -fPIC -Wl,--version-script=${DARLING_TOP_DIRECTORY}/darwin.map")
set(CMAKE_EXE_LINKER_FLAGS "-nodefaultlibs -nostdlib -fPIC -Wl,--version-script=${DARLING_TOP_DIRECTORY}/darwin.map")

SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}/darling")
SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)


add_library(alias SHARED
	alias/alias.c
#	alias/alias_db.c
	alias/alias_pptp.c
	alias/alias_smedia.c
	alias/alias_cuseeme.c
	alias/alias_ftp.c
	alias/alias_irc.c
	alias/alias_nbt.c
	alias/alias_proxy.c
	alias/alias_util.c
)

#install(TARGETS alias DESTINATION ${CMAKE_INSTALL_LIBDIR}/darling)
#add_darling_executable(arp arp.tproj/arp.c)
#set_target_properties(arp PROPERTIES COMPILE_FLAGS "-include net/route.h -include sys/socket.h")
#install(TARGETS arp DESTINATION libexec/darling/usr/bin)

# Manpages
install(FILES
	cfilutil/cfilutil.1
	ecnprobe/ecnprobe.1
	mnc.tproj/mnc.1
	mptcp_client/mptcp_client.1
	netstat.tproj/netstat.1

	DESTINATION libexec/darling/usr/share/man/man1
)

install(FILES alias/libalias.3 DESTINATION libexec/darling/usr/share/man/man3)

install(FILES arp.tproj/arp4.4 DESTINATION libexec/darling/usr/share/man/man3)

install(FILES
	rtadvd.tproj/rtadvd.conf.5
	unbound/doc/unbound.conf.5

	DESTINATION libexec/darling/usr/share/man/man5
)

install(FILES
	arp.tproj/arp.8
	dnctl/dnctl.8
	ifconfig.tproj/ifconfig.8
	ip6addrctl.tproj/ip6addrctl.8
	ip6fw.tproj/ip6fw.8
	ipfw.tproj/ipfw.8
	kdumpd.tproj/kdumpd.8
	mtest.tproj/mtest.8
	natd.tproj/natd.8
	ndp.tproj/ndp.8
	ping.tproj/ping.8
	ping6.tproj/ping6.8
	pktapctl/pktapctl.8
	rarpd.tproj/rarpd.8
	route.tproj/route.8
	rtadvd.tproj/rtadvd.8
	rtsol.tproj/rtsol.8
	spray.tproj/spray.8
	traceroute.tproj/traceroute.8
	traceroute6.tproj/traceroute6.8
	unbound/doc/unbound.8

	DESTINATION libexec/darling/usr/share/man/man8
)
