TEMPLATE = subdirs
CONFIG = ordered

SUBDIRS +=  dbusextended-qt

# Debian 使用系统的 libmpris-qt6；没有该包的发行版用 qmake BUNDLED_MPRIS=1 构建自带的一份
!isEmpty(BUNDLED_MPRIS): SUBDIRS += mpris-qt
