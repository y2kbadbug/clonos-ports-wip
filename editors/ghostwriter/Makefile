# $FreeBSD$

PORTNAME=	ghostwriter
DISTVERSIONPREFIX=	v
DISTVERSION=	1.8.1
CATEGORIES=	editors

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Distraction-free Markdown editor

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

DEPRECATED=	Uses EOL Python 2.7 via www/qt5-webengine
EXPIRATION_DATE=2021-06-23

LIB_DEPENDS=	libhunspell-1.7.so:textproc/hunspell

USES=		compiler:c++11-lang desktop-file-utils pkgconfig qmake qt:5
USE_GITHUB=	yes
GH_ACCOUNT=	wereturtle
USE_QT=		core gui svg webchannel webengine widgets buildtools_build \
		linguisttools_build

# cf. PR 224488
LDFLAGS+=	-Wl,--as-needed

.include <bsd.port.mk>
