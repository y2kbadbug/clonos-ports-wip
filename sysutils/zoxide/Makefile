# $FreeBSD$

PORTNAME=	zoxide
DISTVERSIONPREFIX=	v
DISTVERSION=	0.4.1
PORTREVISION=	10
CATEGORIES=	sysutils

MAINTAINER=	andoriyu@gmail.com
COMMENT=	Fast cd alternative that learns your habits

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo
USE_GITHUB=	yes
GH_ACCOUNT=	ajeetdsouza
CARGO_CRATES=	ansi_term-0.11.0 \
		anyhow-1.0.31 \
		arrayref-0.3.6 \
		arrayvec-0.5.1 \
		atty-0.2.14 \
		autocfg-1.0.0 \
		base64-0.11.0 \
		bincode-1.2.1 \
		bitflags-1.2.1 \
		blake2b_simd-0.5.10 \
		byteorder-1.3.4 \
		cfg-if-0.1.10 \
		clap-2.33.1 \
		constant_time_eq-0.1.5 \
		crossbeam-utils-0.7.2 \
		dirs-2.0.2 \
		dirs-sys-0.3.4 \
		dunce-1.0.0 \
		float-ord-0.2.0 \
		getrandom-0.1.14 \
		heck-0.3.1 \
		hermit-abi-0.1.13 \
		lazy_static-1.4.0 \
		libc-0.2.70 \
		ppv-lite86-0.2.8 \
		proc-macro-error-1.0.2 \
		proc-macro-error-attr-1.0.2 \
		proc-macro2-1.0.17 \
		quote-1.0.6 \
		rand-0.7.3 \
		rand_chacha-0.2.2 \
		rand_core-0.5.1 \
		rand_hc-0.2.0 \
		redox_syscall-0.1.56 \
		redox_users-0.3.4 \
		rust-argon2-0.7.0 \
		serde-1.0.110 \
		serde_derive-1.0.110 \
		strsim-0.8.0 \
		structopt-0.3.14 \
		structopt-derive-0.4.7 \
		syn-1.0.23 \
		syn-mid-0.5.0 \
		textwrap-0.11.0 \
		unicode-segmentation-1.6.0 \
		unicode-width-0.1.7 \
		unicode-xid-0.2.0 \
		uuid-0.8.1 \
		vec_map-0.8.2 \
		version_check-0.9.2 \
		wasi-0.9.0+wasi-snapshot-preview1 \
		winapi-0.3.8 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0
PLIST_FILES=	bin/zoxide

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/zoxide

.include <bsd.port.mk>
