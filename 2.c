/*
============================================================================
Name : 2.c
Author : Chandransh singh chouhan
Description :Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
             identify all the process related information in the corresponding proc directory.
Date: 28th Aug, 2024.
============================================================================
*/
int main(){
//infinite loop 
    while(1);
    return 0;
}
/*

chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc -o 2 2.c
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ ./2
^C              
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ gcc 2.c -o 2
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ nohup ./2 &
[2] 67676
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ nohup: ignoring input and appending output to 'nohup.out'   ps aux | grep 2
root           1  0.0  0.1 168164 12340 ?        Ss   11:03   0:02 /sbin/init splash
root           2  0.0  0.0      0     0 ?        S    11:03   0:00 [kthreadd]
root          12  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-mm_pe]
root          20  0.0  0.0      0     0 ?        S    11:03   0:00 [cpuhp/0]
root          21  0.0  0.0      0     0 ?        S    11:03   0:00 [cpuhp/2]
root          22  0.0  0.0      0     0 ?        S    11:03   0:00 [idle_inject/2]
root          23  0.0  0.0      0     0 ?        S    11:03   0:00 [migration/2]
root          24  0.0  0.0      0     0 ?        S    11:03   0:00 [ksoftirqd/2]
root          26  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/2:0H-events_highpri]
root          27  0.0  0.0      0     0 ?        S    11:03   0:00 [cpuhp/4]
root          28  0.0  0.0      0     0 ?        S    11:03   0:00 [idle_inject/4]
root          29  0.0  0.0      0     0 ?        S    11:03   0:00 [migration/4]
root          32  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/4:0H-events_highpri]
root          42  0.0  0.0      0     0 ?        S    11:03   0:00 [ksoftirqd/8]
root          52  0.0  0.0      0     0 ?        S    11:03   0:00 [idle_inject/1]
root          62  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/3:0H-events_highpri]
root          72  0.0  0.0      0     0 ?        S    11:03   0:00 [ksoftirqd/7]
root          82  0.0  0.0      0     0 ?        S    11:03   0:00 [idle_inject/11]
root          92  0.0  0.0      0     0 ?        S    11:03   0:00 [kauditd]
root         102  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-kbloc]
root         112  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-edac-]
root         119  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/25-AMD-Vi0-Evt]
root         120  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/26-AMD-Vi0-PPR]
root         121  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/27-AMD-Vi0-GA]
root         122  0.0  0.0      0     0 ?        S    11:03   0:01 [kswapd0]
root         123  0.0  0.0      0     0 ?        S    11:03   0:00 [ecryptfs-kthread]
root         124  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-kthro]
root         127  0.0  0.0      0     0 ?        I    11:03   0:00 [kworker/4:1-events_freezable]
root         132  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-mld]
root         159  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/28-ACPI:Event]
root         160  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/29-ACPI:Event]
root         162  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/31-ACPI:Event]
root         163  0.0  0.0      0     0 ?        S    11:03   0:00 [irq/32-ACPI:Event]
root         200  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/8:1H-kblockd]
root         201  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/9:1H-kblockd]
root         203  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/2:1H-acpi_thermal_pm]
root         204  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/4:1H-kblockd]
root         206  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/6:1H-kblockd]
root         208  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/7:1H-kblockd]
root         216  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/3:1H-kblockd]
root         218  0.3  0.0      0     0 ?        S    11:03   0:28 [irq/38-SYNA32AC:00]
root         248  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-nvme-]
root         249  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-nvme-]
root         250  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-nvme-]
root         251  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-nvme-]
root         254  0.0  0.0      0     0 ?        I    11:03   0:00 [kworker/11:2-events]
root         274  0.0  0.0      0     0 ?        S    11:03   0:01 [jbd2/nvme0n1p6-8]
root         275  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/R-ext4-]
root         316  0.0  0.4  71780 36224 ?        S<s  11:03   0:01 /lib/systemd/systemd-journald
root         349  0.0  0.0      0     0 ?        I    11:03   0:00 [kworker/3:2-mm_percpu_wq]
root         374  0.0  0.0  27152  6912 ?        Ss   11:03   0:00 /lib/systemd/systemd-udevd
root         448  0.0  0.0      0     0 ?        I<   11:03   0:00 [kworker/u35:2-hci0]
systemd+     582  0.1  0.0  14836  6784 ?        Ss   11:03   0:10 /lib/systemd/systemd-oomd
systemd+     583  0.0  0.1  26068 13904 ?        Ss   11:03   0:00 /lib/systemd/systemd-resolved
root         636  0.0  0.0 240040  7352 ?        Ssl  11:03   0:00 /usr/libexec/accounts-daemon
root         637  0.0  0.0   2816  1920 ?        Ss   11:03   0:00 /usr/sbin/acpid
avahi        642  0.0  0.0   7628  3712 ?        Ss   11:03   0:00 avahi-daemon: running [chandransh-HP-Laptop-14s-fq1xxx.local]
root         643  0.0  0.0  10624  4864 ?        Ss   11:03   0:00 /usr/lib/bluetooth/bluetoothd
root         645  0.0  0.0   9496  2688 ?        Ss   11:03   0:00 /usr/sbin/cron -f -P
message+     646  0.0  0.0  11116  6016 ?        Ss   11:03   0:02 @dbus-daemon --system --address=systemd: --nofork --nopidfile --systemd-activation --syslog-only
root         648  0.0  0.2 335228 19012 ?        Ssl  11:03   0:03 /usr/sbin/NetworkManager --no-daemon
root         653  0.0  0.0  82840  3968 ?        Ssl  11:03   0:01 /usr/sbin/irqbalance --foreground
root         657  0.0  0.2  41060 20608 ?        Ss   11:03   0:00 /usr/bin/python3 /usr/bin/networkd-dispatcher --run-startup-triggers
root         660  0.0  0.1 243016 11056 ?        Ssl  11:03   0:01 /usr/libexec/polkitd --no-debug
root         661  0.0  0.0 240060  7168 ?        Ssl  11:03   0:00 /usr/libexec/power-profiles-daemon
syslog       664  0.0  0.0 222404  6016 ?        Ssl  11:03   0:00 /usr/sbin/rsyslogd -n -iNONE
root         672  0.0  0.4 2059612 32492 ?       Ssl  11:03   0:02 /usr/lib/snapd/snapd
root         674  0.0  0.0 236380  6400 ?        Ssl  11:03   0:00 /usr/libexec/switcheroo-control
root         676  0.0  0.1  48228  7900 ?        Ss   11:03   0:00 /lib/systemd/systemd-logind
root         678  0.0  0.1 393252 12776 ?        Ssl  11:03   0:00 /usr/libexec/udisks2/udisksd
root         679  0.0  0.1  17972 11264 ?        Ss   11:03   0:01 /sbin/wpa_supplicant -u -s -O /run/wpa_supplicant
avahi        731  0.0  0.0   7444  1152 ?        S    11:03   0:00 avahi-daemon: chroot helper
root         762  0.0  0.1 317984 12064 ?        Ssl  11:03   0:00 /usr/sbin/ModemManager
root         770  0.0  0.3 118160 23168 ?        Ssl  11:03   0:00 /usr/bin/python3 /usr/share/unattended-upgrades/unattended-upgrade-shutdown --wait-for-signal
root         826  0.0  0.1 241328  8448 ?        Ssl  11:03   0:00 /usr/sbin/gdm3
root         879  0.0  0.0      0     0 ?        S    11:03   0:00 [card1-crtc2]
rtkit        940  0.0  0.0 154004  3072 ?        SNsl 11:03   0:00 /usr/libexec/rtkit-daemon
root        1007  0.0  0.1 242352  8832 ?        Ssl  11:03   0:00 /usr/libexec/upowerd
root        1011  0.0  0.2 298232 20016 ?        Ssl  11:03   0:00 /usr/libexec/packagekitd
colord      1169  0.0  0.1 245460 12712 ?        Ssl  11:03   0:00 /usr/libexec/colord
root        1279  0.0  0.1 172636 11264 ?        Ssl  11:03   0:00 /usr/sbin/cups-browsed
kernoops    1295  0.0  0.0  13092  2212 ?        Ss   11:03   0:00 /usr/sbin/kerneloops --test
kernoops    1298  0.0  0.0  13092  2196 ?        Ss   11:03   0:00 /usr/sbin/kerneloops
root        1302  0.0  0.1 318188 10368 ?        Sl   11:03   0:00 gdm-session-worker [pam/gdm-password]
chandra+    1312  0.0  0.1  18052 10496 ?        Ss   11:03   0:00 /lib/systemd/systemd --user
chandra+    1319  0.0  0.0  39852  6400 ?        S<sl 11:03   0:00 /usr/bin/pipewire
chandra+    1320  0.0  0.0  23604  6272 ?        Ssl  11:03   0:00 /usr/bin/pipewire-media-session
chandra+    1321  0.0  0.3 1570024 26184 ?       S<sl 11:03   0:00 /usr/bin/pulseaudio --daemonize=no --log-target=journal
chandra+    1325  0.0  0.1 240896  7448 ?        Sl   11:03   0:00 /usr/bin/gnome-keyring-daemon --daemonize --login
chandra+    1328  0.0  0.0  10020  5760 ?        Ss   11:03   0:01 /usr/bin/dbus-daemon --session --address=systemd: --nofork --nopidfile --systemd-activation --syslog-only
chandra+    1336  0.0  0.0 162392  5760 tty2     Ssl+ 11:03   0:00 /usr/libexec/gdm-wayland-session env GNOME_SHELL_SESSION_MODE=ubuntu /usr/bin/gnome-session --session=ubuntu
chandra+    1339  0.0  0.2 223044 15744 tty2     Sl+  11:03   0:00 /usr/libexec/gnome-session-binary --session=ubuntu
chandra+    1377  0.0  0.0  91912  5504 ?        Ssl  11:03   0:00 /usr/libexec/gnome-session-ctl --monitor
chandra+    1387  0.0  0.0 240740  7296 ?        Ssl  11:03   0:00 /usr/libexec/gvfsd
chandra+    1394  0.0  0.0 380896  6528 ?        Sl   11:03   0:00 /usr/libexec/gvfsd-fuse /run/user/1000/gvfs -f
chandra+    1397  0.0  0.2 445460 17024 ?        Ssl  11:03   0:00 /usr/libexec/gnome-session-binary --systemd-service --session=ubuntu
chandra+    1416  0.0  0.1 309628  7680 ?        Sl   11:03   0:00 /usr/libexec/at-spi-bus-launcher --launch-immediately
chandra+    1422  0.0  0.0   8564  4224 ?        S    11:03   0:00 /usr/bin/dbus-daemon --config-file=/usr/share/defaults/at-spi2/accessibility.conf --nofork --print-address 11 --address=unix:path=/run/user/1000/at-spi/bus
chandra+    1426  3.9  4.7 5638612 352624 ?      Ssl  11:03   5:25 /usr/bin/gnome-shell
chandra+    1458  0.0  0.0 236152  6016 ?        Ssl  11:03   0:00 /usr/libexec/xdg-permission-store
chandra+    1460  0.0  0.2 582740 17920 ?        Sl   11:03   0:00 /usr/libexec/gnome-shell-calendar-server
chandra+    1469  0.0  0.3 1072216 25728 ?       Ssl  11:03   0:00 /usr/libexec/evolution-source-registry
chandra+    1482  0.0  0.1 389816 10880 ?        Ssl  11:03   0:00 /usr/libexec/gvfs-udisks2-volume-monitor
chandra+    1502  0.0  0.1 315212  7936 ?        Ssl  11:03   0:00 /usr/libexec/gvfs-afc-volume-monitor
chandra+    1509  0.0  0.3 746004 28416 ?        Ssl  11:03   0:00 /usr/libexec/evolution-addressbook-factory
chandra+    1514  0.0  0.0 236636  6784 ?        Ssl  11:03   0:00 /usr/libexec/gvfs-goa-volume-monitor
chandra+    1520  0.0  0.0 237552  6912 ?        Ssl  11:03   0:00 /usr/libexec/gvfs-gphoto2-volume-monitor
chandra+    1529  0.0  0.0 236460  6400 ?        Ssl  11:03   0:00 /usr/libexec/gvfs-mtp-volume-monitor
chandra+    1539  0.0  0.1 388604  8704 ?        Sl   11:03   0:00 /usr/libexec/gvfsd-trash --spawner :1.12 /org/gtk/gvfs/exec_spaw/0
chandra+    1553  0.0  0.3 2873932 26900 ?       Sl   11:03   0:00 /usr/bin/gjs /usr/share/gnome-shell/org.gnome.Shell.Notifications
chandra+    1555  0.0  0.0 162688  7168 ?        Sl   11:03   0:00 /usr/libexec/at-spi2-registryd --use-gnome-session
chandra+    1570  0.0  0.0   2892  1536 ?        Ss   11:03   0:00 sh -c /usr/bin/ibus-daemon --panel disable $([ "$XDG_SESSION_TYPE" = "x11" ] && echo "--xim")
chandra+    1571  0.0  0.0 310428  6656 ?        Ssl  11:03   0:00 /usr/libexec/gsd-a11y-settings
chandra+    1573  0.0  0.1 315300 11696 ?        Sl   11:03   0:02 /usr/bin/ibus-daemon --panel disable
chandra+    1574  0.0  0.3 537116 27616 ?        Ssl  11:03   0:00 /usr/libexec/gsd-color
chandra+    1576  0.0  0.2 375472 16128 ?        Ssl  11:03   0:00 /usr/libexec/gsd-datetime
chandra+    1579  0.0  0.1 312064  7808 ?        Ssl  11:03   0:00 /usr/libexec/gsd-housekeeping
chandra+    1581  0.0  0.3 341304 23296 ?        Ssl  11:03   0:00 /usr/libexec/gsd-keyboard
chandra+    1583  0.0  0.3 865020 28056 ?        Ssl  11:03   0:00 /usr/libexec/gsd-media-keys
chandra+    1585  0.0  0.3 451304 27136 ?        Ssl  11:03   0:00 /usr/libexec/gsd-power
chandra+    1590  0.0  0.1 249860 10880 ?        Ssl  11:03   0:00 /usr/libexec/gsd-print-notifications
chandra+    1593  0.0  0.0 384128  6528 ?        Ssl  11:03   0:00 /usr/libexec/gsd-rfkill
chandra+    1595  0.0  0.0 236292  6144 ?        Ssl  11:03   0:00 /usr/libexec/gsd-screensaver-proxy
chandra+    1605  0.0  0.1 312308  8320 ?        Ssl  11:03   0:00 /usr/libexec/gsd-smartcard
chandra+    1615  0.0  0.3 341904 22996 ?        Ssl  11:03   0:00 /usr/libexec/gsd-wacom
chandra+    1642  0.0  0.8 822248 63708 ?        Sl   11:03   0:00 /usr/libexec/evolution-data-server/evolution-alarm-notify
chandra+    1648  0.0  0.4 348560 30072 ?        Sl   11:03   0:01 /usr/libexec/ibus-extension-gtk3
chandra+    1649  0.0  0.0 232272  7296 ?        Sl   11:03   0:00 /usr/libexec/gsd-disk-utility-notify
chandra+    1652  0.0  0.0 237260  7296 ?        Sl   11:03   0:00 /usr/libexec/ibus-portal
chandra+    1718  0.0  0.1 342360 14720 ?        Sl   11:03   0:00 /usr/libexec/gsd-printer
chandra+    1723  0.0  0.0 163484  7168 ?        Sl   11:03   0:00 /usr/libexec/ibus-engine-simple
chandra+    1733  0.0  0.1 623788 14208 ?        Ssl  11:03   0:00 /usr/libexec/xdg-desktop-portal
chandra+    1741  0.0  0.0 536912  7168 ?        Ssl  11:03   0:00 /usr/libexec/xdg-document-portal
root        1746  0.0  0.0   2796  1792 ?        Ss   11:03   0:00 fusermount3 -o rw,nosuid,nodev,fsname=portal,auto_unmount,subtype=portal -- /run/user/1000/doc
chandra+    1749  0.0  0.3 662964 29296 ?        Ssl  11:03   0:00 /usr/libexec/xdg-desktop-portal-gnome
chandra+    1761  0.0  0.4 646260 35312 ?        SNsl 11:03   0:01 /usr/libexec/tracker-miner-fs-3
chandra+    1784  0.0  0.3 2873924 27540 ?       Sl   11:03   0:00 /usr/bin/gjs /usr/share/gnome-shell/org.gnome.ScreenSaver
chandra+    1807  0.0  0.3 418216 25476 ?        Ssl  11:03   0:00 /usr/libexec/xdg-desktop-portal-gtk
chandra+    1855  0.0  0.0 163196  6528 ?        Ssl  11:03   0:00 /usr/libexec/gvfsd-metadata
chandra+    2130  0.0  0.2 1977108 20020 ?       Sl   11:04   0:00 /usr/bin/snap userd
chandra+    2502  0.0  0.4 494644 31696 ?        Sl   11:04   0:00 update-notifier
chandra+    2765  1.0  2.6 1187097224 194644 ?   Ssl  11:05   1:25 /snap/code/169/usr/share/code/code --no-sandbox --force-user-env
chandra+    2767  0.0  0.6 33786016 47360 ?      S    11:05   0:00 /snap/code/169/usr/share/code/code --type=zygote --no-zygote-sandbox --no-sandbox
chandra+    2768  0.0  0.6 33786032 47616 ?      S    11:05   0:00 /snap/code/169/usr/share/code/code --type=zygote --no-sandbox
chandra+    2781  0.0  0.0 33576184 3328 ?       Sl   11:05   0:00 /snap/code/169/usr/share/code/chrome_crashpad_handler --monitor-self-annotation=ptype=crashpad-handler --no-rate-limit --database=/home/chandransh/.config/Code/Crashpad --url=appcenter://code?aid=fba07a4d-84bd-4fc8-a125-9640fc8ce171&uid=a523d2ce-fe20-4ef9-a67f-0ed8e8507268&iid=a523d2ce-fe20-4ef9-a67f-0ed8e8507268&sid=a523d2ce-fe20-4ef9-a67f-0ed8e8507268 --annotation=_companyName=Microsoft --annotation=_productName=VSCode --annotation=_version=1.93.1 --annotation=lsb-release=Ubuntu 22.04.4 LTS --annotation=plat=Linux --annotation=prod=Electron --annotation=ver=30.4.0 --initial-client-fd=46 --shared-client-connection
chandra+    2784  1.2  1.5 779300 118848 ?       Sl   11:05   1:43 /usr/bin/Xwayland :0 -rootless -noreset -accessx -core -auth /run/user/1000/.mutter-Xwaylandauth.34IKU2 -listen 4 -listen 5 -displayfd 6 -initfd 7
chandra+    2798  0.0  1.1 906016 86052 ?        Ssl  11:05   0:00 /usr/libexec/gsd-xsettings
chandra+    2828  0.0  0.3 268636 26624 ?        Sl   11:05   0:00 /usr/libexec/ibus-x11
chandra+    2864  0.0  0.9 33860924 68260 ?      Sl   11:05   0:02 /snap/code/169/usr/share/code/code --type=utility --utility-sub-type=network.mojom.NetworkService --lang=en-GB --service-sandbox-type=none --no-sandbox --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-schemes=vscode-webview,vscode-file --cors-schemes=vscode-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-schemes=vscode-webview --code-cache-schemes=vscode-webview,vscode-file --shared-files=v8_context_snapshot_data:100 --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version
chandra+    2891  7.9  4.6 1191321984 345712 ?   Sl   11:05  10:49 /snap/code/169/usr/share/code/code --type=renderer --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-schemes=vscode-webview,vscode-file --cors-schemes=vscode-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-schemes=vscode-webview --code-cache-schemes=vscode-webview,vscode-file --app-path=/snap/code/169/usr/share/code/resources/app --enable-sandbox --enable-blink-features=HighlightAPI --no-sandbox --disable-blink-features=FontMatchingCTMigration, --lang=en-GB --num-raster-threads=4 --enable-main-frame-before-activation --renderer-client-id=5 --time-ticks-at-unix-epoch=-1727328798394416 --launch-time-ticks=103141109 --shared-files=v8_context_snapshot_data:100 --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version --vscode-window-config=vscode:b0a2571a-df3f-4c4f-8dc8-7d57045fb55c
chandra+    2922  2.4  1.2 33978140 94220 ?      Sl   11:05   3:20 /snap/code/169/usr/share/code/code --type=gpu-process --disable-gpu-sandbox --no-sandbox --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --gpu-preferences=WAAAAAAAAAAgAAAEAAAAAAAAAAAAAAAAAABgAAAAAAA4AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAGAAAAAAAAAAYAAAAAAAAAAgAAAAAAAAACAAAAAAAAAAIAAAAAAAAAA== --use-gl=angle --use-angle=swiftshader-webgl --shared-files --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version
chandra+    2955  0.5  2.7 1186887464 204664 ?   Sl   11:05   0:42 /snap/code/169/usr/share/code/code --type=utility --utility-sub-type=node.mojom.NodeService --lang=en-GB --service-sandbox-type=none --no-sandbox --dns-result-order=ipv4first --inspect-port=0 --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-schemes=vscode-webview,vscode-file --cors-schemes=vscode-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-schemes=vscode-webview --code-cache-schemes=vscode-webview,vscode-file --shared-files=v8_context_snapshot_data:100 --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version
chandra+    2970  0.0  1.4 1186885140 110596 ?   Sl   11:05   0:04 /snap/code/169/usr/share/code/code --type=utility --utility-sub-type=node.mojom.NodeService --lang=en-GB --service-sandbox-type=none --no-sandbox --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-schemes=vscode-webview,vscode-file --cors-schemes=vscode-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-schemes=vscode-webview --code-cache-schemes=vscode-webview,vscode-file --shared-files=v8_context_snapshot_data:100 --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version
chandra+    2971  0.0  1.2 1186902108 93692 ?    Sl   11:05   0:02 /snap/code/169/usr/share/code/code --type=utility --utility-sub-type=node.mojom.NodeService --lang=en-GB --service-sandbox-type=none --no-sandbox --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-schemes=vscode-webview,vscode-file --cors-schemes=vscode-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-schemes=vscode-webview --code-cache-schemes=vscode-webview,vscode-file --shared-files=v8_context_snapshot_data:100 --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version
chandra+    3003  0.5  1.4 1186904936 107504 ?   Sl   11:05   0:48 /snap/code/169/usr/share/code/code --type=utility --utility-sub-type=node.mojom.NodeService --lang=en-GB --service-sandbox-type=none --no-sandbox --crashpad-handler-pid=2781 --enable-crash-reporter=6820982d-495b-4849-9849-3377c3b99a50,no_channel --user-data-dir=/home/chandransh/.config/Code --standard-schemes=vscode-webview,vscode-file --secure-schemes=vscode-webview,vscode-file --cors-schemes=vscode-webview,vscode-file --fetch-schemes=vscode-webview,vscode-file --service-worker-schemes=vscode-webview --code-cache-schemes=vscode-webview,vscode-file --shared-files=v8_context_snapshot_data:100 --field-trial-handle=3,i,9351455931701824671,13837410162213402529,262144 --enable-features=kWebSQLAccess --disable-features=CalculateNativeWinOcclusion,SpareRendererForSitePerProcess --variations-seed-version
chandra+    3035  0.3  1.0 136944 80552 ?        Sl   11:05   0:32 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools
chandra+    3262  0.3  1.4 680524 107384 ?       Sl   11:05   0:27 file-roller /home/chandransh/Downloads/Hands-On-List-1.zip
chandra+    4466  0.0  0.0   2780   768 ?        Ss   11:18   0:00 ./30
chandra+    6442  0.0  0.0   8868  5504 pts/1    Ss   11:22   0:00 /usr/bin/bash --init-file /snap/code/169/usr/share/code/resources/app/out/vs/workbench/contrib/terminal/browser/media/shellIntegration-bash.sh
root        7047  0.0  0.0      0     0 ?        I<   11:25   0:00 [kworker/u37:5-ttm]
root        9029  0.0  0.0      0     0 ?        I    11:34   0:00 [kworker/9:1-mm_percpu_wq]
root       12914  0.0  0.0      0     0 ?        I    11:56   0:00 [kworker/10:1-mm_percpu_wq]
chandra+   19889  0.0  0.9 3131468 68016 ?       Sl   11:57   0:02 gjs /usr/share/gnome-shell/extensions/ding@rastersoft.com/ding.js -E -P /usr/share/gnome-shell/extensions/ding@rastersoft.com -M 0 -D 0:0:1920:1080:1:27:0:0:0:0
root       21901  0.0  0.0      0     0 ?        I<   11:57   0:00 [kworker/R-xfsal]
root       21902  0.0  0.0      0     0 ?        I<   11:57   0:00 [kworker/R-xfs_m]
root       21906  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsIO]
root       21907  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21908  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21909  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21910  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21911  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21912  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21913  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21914  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21915  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21916  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21917  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21918  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsCommit]
root       21919  0.0  0.0      0     0 ?        S    11:57   0:00 [jfsSync]
root       33238  0.0  0.0      0     0 ?        I    11:59   0:00 [kworker/8:1-mm_percpu_wq]
root       48890  0.0  0.0      0     0 ?        I<   12:00   0:00 [kworker/u36:6-ttm]
root       48891  0.0  0.0      0     0 ?        I<   12:00   0:00 [kworker/u36:7-ttm]
root       52598  0.0  0.0      0     0 ?        I<   12:10   0:00 [kworker/u36:0-rtw_tx_wq]
root       52866  0.0  0.0      0     0 ?        I    12:12   0:00 [kworker/9:2-rcu_gp]
root       53334  0.0  0.0      0     0 ?        I    12:15   0:00 [kworker/2:0-mm_percpu_wq]
root       54011  0.0  0.0      0     0 ?        I<   12:17   0:00 [kworker/u36:2-ttm]
root       54365  0.0  0.0      0     0 ?        I    12:19   0:02 [kworker/u34:3-events_power_efficient]
root       55346  0.0  0.0      0     0 ?        I    12:25   0:00 [kworker/11:1]
root       55348  0.0  0.0      0     0 ?        I    12:25   0:00 [kworker/6:0-events]
root       56447  0.0  0.0      0     0 ?        I    12:30   0:00 [kworker/4:0]
root       57649  0.0  0.0      0     0 ?        I<   12:37   0:00 [kworker/u37:2-rtw_tx_wq]
root       59738  0.0  0.0      0     0 ?        I    12:49   0:00 [kworker/1:0-events]
root       59878  0.0  0.0      0     0 ?        I    12:49   0:00 [kworker/7:1-events]
root       60220  0.0  1.0 441876 81592 ?        Ssl  12:51   0:00 /usr/libexec/fwupd/fwupd
root       60226  0.0  0.0      0     0 ?        I    12:51   0:00 [kworker/5:0-mm_percpu_wq]
root       60255  0.0  0.0      0     0 ?        I    12:51   0:00 [kworker/2:2]
root       60771  0.0  0.0      0     0 ?        I    12:54   0:00 [kworker/8:0-events]
root       61077  0.0  0.0      0     0 ?        I    12:56   0:00 [kworker/3:0-events]
root       61718  0.0  0.0      0     0 ?        I    12:59   0:00 [kworker/u32:0-gfx_low]
root       62289  0.0  0.0      0     0 ?        I<   13:02   0:00 [kworker/u37:1-ttm]
root       62687  0.0  0.0      0     0 ?        I    13:03   0:00 [kworker/0:2-events]
chandra+   63848  0.0  0.2 4256796 17524 ?       Sl   13:08   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {CC90956C-A53C-4686-A91D-EFE8809C1506}
chandra+   63908  0.0  0.2 4256948 18372 ?       Sl   13:08   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {6C3EA569-0F1B-41F9-B579-E8206A88A720}
chandra+   64080  4.5  5.8 11619328 431688 ?     Sl   13:09   0:32 /snap/firefox/4955/usr/lib/firefox/firefox
chandra+   64246  0.0  0.6 208680 47488 ?        Sl   13:09   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -parentBuildID 20240916093609 -prefsLen 36119 -prefMapSize 263460 -appDir /snap/firefox/4955/usr/lib/firefox/browser {b2f8985e-a6e0-4cae-b35b-b8a2346e0877} 64080 true socket
chandra+   64263  0.4  1.8 2500360 135868 ?      Sl   13:09   0:02 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -childID 1 -isForBrowser -prefsLen 36260 -prefMapSize 263460 -jsInitLen 234840 -parentBuildID 20240916093609 -greomni /snap/firefox/4955/usr/lib/firefox/omni.ja -appomni /snap/firefox/4955/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4955/usr/lib/firefox/browser {f7f2e314-73f6-4d39-aafc-a784982f1755} 64080 true tab
chandra+   64388  0.0  1.2 2442012 90204 ?       Sl   13:09   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -childID 2 -isForBrowser -prefsLen 42555 -prefMapSize 263460 -jsInitLen 234840 -parentBuildID 20240916093609 -greomni /snap/firefox/4955/usr/lib/firefox/omni.ja -appomni /snap/firefox/4955/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4955/usr/lib/firefox/browser {7ce4e415-d261-4e55-9267-45407ef0fcb6} 64080 true tab
chandra+   64519  0.0  0.7 342488 55936 ?        Sl   13:09   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -parentBuildID 20240916093609 -sandboxingKind 0 -prefsLen 42542 -prefMapSize 263460 -appDir /snap/firefox/4955/usr/lib/firefox/browser {ffeb1ee2-8151-4015-86a0-40f35fa685f9} 64080 true utility
chandra+   64580  4.1  2.9 2645680 217064 ?      Sl   13:09   0:29 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -childID 3 -isForBrowser -prefsLen 35559 -prefMapSize 263460 -jsInitLen 234840 -parentBuildID 20240916093609 -greomni /snap/firefox/4955/usr/lib/firefox/omni.ja -appomni /snap/firefox/4955/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4955/usr/lib/firefox/browser {bbec8404-96db-4cd2-8fc8-1279703f1527} 64080 true tab
chandra+   64582  0.0  0.9 2401700 72704 ?       Sl   13:09   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -childID 4 -isForBrowser -prefsLen 35559 -prefMapSize 263460 -jsInitLen 234840 -parentBuildID 20240916093609 -greomni /snap/firefox/4955/usr/lib/firefox/omni.ja -appomni /snap/firefox/4955/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4955/usr/lib/firefox/browser {8fc87efe-8a6d-46f1-8087-e915518e3f64} 64080 true tab
chandra+   64624  0.0  0.9 2401704 73088 ?       Sl   13:09   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -childID 5 -isForBrowser -prefsLen 35559 -prefMapSize 263460 -jsInitLen 234840 -parentBuildID 20240916093609 -greomni /snap/firefox/4955/usr/lib/firefox/omni.ja -appomni /snap/firefox/4955/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4955/usr/lib/firefox/browser {ab61e7f5-699d-4be8-a648-33dccb535b94} 64080 true tab
root       64942  0.0  0.0      0     0 ?        I    13:10   0:00 [kworker/5:1]
root       64970  0.1  0.0      0     0 ?        I    13:10   0:00 [kworker/u32:3-gfx_low]
chandra+   65103  0.0  0.2 4256712 17116 ?       Sl   13:10   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {367ABFA4-9205-443D-A086-4363E18DEF4F}
chandra+   65122  0.0  0.2 4256172 16512 ?       Sl   13:10   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {7EB44156-D996-4EBB-92F6-D17FA1BC47E6}
chandra+   65154  0.0  0.2 4256832 17328 ?       Sl   13:10   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {CBF34B42-2AF4-471C-AB7F-3F10FE8002B7}
chandra+   65400  0.0  0.2 4257068 18024 ?       Sl   13:12   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {CF62C4AD-4AF0-4EFD-9241-DAD9822BA6A5}
chandra+   65444  0.5  1.2 726972 90356 ?        Sl   13:12   0:03 /usr/bin/gedit --gapplication-service
chandra+   65508  0.0  0.2 4256864 17476 ?       Sl   13:12   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {F5BCF2F6-CA8B-4377-802A-06A5BE026492}
chandra+   65537  0.0  0.2 4256676 17572 ?       Sl   13:12   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {AAFEB94A-7051-48D4-B2BE-4F7C56FF26BD}
chandra+   65593  0.0  0.2 4258624 21376 ?       Sl   13:12   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {CE756919-27F6-4978-9771-A849140BFBF4}
chandra+   65646  0.0  0.2 4257100 18064 ?       Sl   13:13   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {E738E871-65A0-4699-995F-33F28C1017A9}
chandra+   66052  0.0  0.2 4257156 18620 ?       Sl   13:14   0:00 /home/chandransh/.vscode/extensions/ms-vscode.cpptools-1.21.6-linux-x64/bin/cpptools-srv 3035 {FFDF194C-5769-4683-95D2-DCD91BA48F7B}
chandra+   66331  0.0  0.9 2401716 72576 ?       Sl   13:15   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -childID 6 -isForBrowser -prefsLen 35616 -prefMapSize 263460 -jsInitLen 234840 -parentBuildID 20240916093609 -greomni /snap/firefox/4955/usr/lib/firefox/omni.ja -appomni /snap/firefox/4955/usr/lib/firefox/browser/omni.ja -appDir /snap/firefox/4955/usr/lib/firefox/browser {39351d6d-d6f0-43a9-84b7-f4487ef9241c} 64080 true tab
root       66381  0.1  0.0      0     0 ?        I    13:16   0:00 [kworker/u32:2-gfx_low]
chandra+   66427  0.0  0.7 341204 54784 ?        Sl   13:16   0:00 /snap/firefox/4955/usr/lib/firefox/firefox -contentproc -parentBuildID 20240916093609 -prefsLen 42804 -prefMapSize 263460 -appDir /snap/firefox/4955/usr/lib/firefox/browser {5ba54b09-401e-4f9c-b7ad-19d16c554bd0} 64080 true rdd
root       66529  0.0  0.0      0     0 ?        I    13:17   0:00 [kworker/u34:0]
chandra+   66741 99.8  0.0   2648  1024 pts/1    R    13:17   3:37 ./2
root       67328  0.0  0.0      0     0 ?        I<   13:20   0:00 [kworker/u37:3]
chandra+   67676 98.2  0.0   2648  1024 pts/1    R    13:20   0:28 ./2
root       67822  0.0  0.0      0     0 ?        I    13:21   0:00 [kworker/u32:1-gfx_low]
chandra+   67824  0.0  0.0  10000  3456 pts/1    R+   13:21   0:00 ps aux
chandra+   67825  0.0  0.0   6572  2432 pts/1    S+   13:21   0:00 grep --color=auto 2
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ kill <67676>
bash: syntax error near unexpected token `67676'
chandransh@chandransh-HP-Laptop-14s-fq1xxx:~/linux$ kill 67676
[2]+  Terminated              nohup ./2*/