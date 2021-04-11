project(network_cmds)

cmake_minimum_required(VERSION 3.10)

# Automatically escape macros
cmake_policy(SET CMP0005 NEW)

add_compile_definitions(
	USE_RFC2292BIS=1
	__APPLE_USE_RFC_3542=1
	__APPLE_API_OBSOLETE=1

	PRIVATE
)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -nostdinc -fwrapv -fPIC -ggdb")

# the calls that are commented out are because their targets are apparently not present on a real macOS install

add_subdirectory(arp.tproj)
#add_subdirectory(cfilutil)
add_subdirectory(dnctl)
#add_subdirectory(ecnprobe) # missing libpcap; also not present on standard macOS install
#add_subdirectory(frame_delay)
add_subdirectory(ifconfig.tproj)
#add_subdirectory(ip6addrctl.tproj)
add_subdirectory(kdumpd.tproj)
#add_subdirectory(mnc.tprojc)
#add_subdirectory(mptcp_client)
add_subdirectory(ndp.tproj)
add_subdirectory(netstat.tproj)
add_subdirectory(ping.tproj)
#add_subdirectory(ping6.tproj) # missing libipsec; *IS* present on standard macOS install
#add_subdirectory(pktapctl)
#add_subdirectory(pktmnglr)
add_subdirectory(rarpd.tproj)
add_subdirectory(route.tproj)
add_subdirectory(rtadvd.tproj)
add_subdirectory(rtsol.tproj)
#add_subdirectory(spray.tproj) # missing some RPC stuff in libinfo
add_subdirectory(traceroute.tproj)
#add_subdirectory(traceroute6.tproj) # missing libipse; *IS* present on standard macOS install
add_subdirectory(unbound)
