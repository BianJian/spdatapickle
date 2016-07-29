/* dp_xyzaddrbookstruct.cpp
   Generated by spxml2struct from D:\code\spdatapickle\trunk\spdatapickle\addrbook.xml

   !!! DO NOT EDIT !!!

*/

#include <stdio.h>

#include "dp_xyzaddrbookstruct.hpp"

#include "spdatapickle/spdplib.hpp"

static SP_DPMetaField_t gMetaXYZPhoneNumber [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Type",
		SP_DP_FIELD_OFFSET(XYZPhoneNumber_t, mType), eTypeSPDPChar, 1, 1, 10,
		"", sizeof(char[10]), sizeof(char), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Primary",
		SP_DP_FIELD_OFFSET(XYZPhoneNumber_t, mPrimary), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 0 },
	{ sizeof(SP_DPMetaField_t), 3, "Content",
		SP_DP_FIELD_OFFSET(XYZPhoneNumber_t, mContent), eTypeSPDPChar, 1, 1, 0,
		"", sizeof(char *), sizeof(char), 0 }
};

static SP_DPMetaField_t gMetaXYZEmail [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Type",
		SP_DP_FIELD_OFFSET(XYZEmail_t, mType), eTypeSPDPChar, 1, 1, 10,
		"", sizeof(char[10]), sizeof(char), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Address",
		SP_DP_FIELD_OFFSET(XYZEmail_t, mAddress), eTypeSPDPChar, 1, 1, 0,
		"", sizeof(char *), sizeof(char), 0 },
	{ sizeof(SP_DPMetaField_t), 3, "Nickname",
		SP_DP_FIELD_OFFSET(XYZEmail_t, mNickname), eTypeSPDPChar, 1, 0, 0,
		"", sizeof(char *), sizeof(char), 0 }
};

static SP_DPMetaField_t gMetaXYZContact [] = {
	{ sizeof(SP_DPMetaField_t), 1, "Name",
		SP_DP_FIELD_OFFSET(XYZContact_t, mName), eTypeSPDPChar, 1, 1, 0,
		"", sizeof(char *), sizeof(char), 0 },
	{ sizeof(SP_DPMetaField_t), 2, "Image",
		SP_DP_FIELD_OFFSET(XYZContact_t, mImage), eTypeSP_DPBuffer, 0, 1, 0,
		"", sizeof(SP_DPBuffer_t), sizeof(SP_DPBuffer_t), 0 },
	{ sizeof(SP_DPMetaField_t), 3, "EmailList",
		SP_DP_FIELD_OFFSET(XYZContact_t, mEmailList), eTypeXYZEmail, 1, 1, 0,
		"EmailCount", sizeof(XYZEmail_t *), sizeof(XYZEmail_t), 0 },
	{ sizeof(SP_DPMetaField_t), 4, "EmailCount",
		SP_DP_FIELD_OFFSET(XYZContact_t, mEmailCount), eTypeSPDPInt32, 0, 0, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 },
	{ sizeof(SP_DPMetaField_t), 5, "PhoneCount",
		SP_DP_FIELD_OFFSET(XYZContact_t, mPhoneCount), eTypeSPDPInt32, 0, 1, 0,
		"", sizeof(int32_t), sizeof(int32_t), 1 },
	{ sizeof(SP_DPMetaField_t), 6, "PhoneList",
		SP_DP_FIELD_OFFSET(XYZContact_t, mPhoneList), eTypeXYZPhoneNumber, 1, 1, 0,
		"PhoneCount", sizeof(XYZPhoneNumber_t *), sizeof(XYZPhoneNumber_t), 0 },
	{ sizeof(SP_DPMetaField_t), 7, "LuckNumber",
		SP_DP_FIELD_OFFSET(XYZContact_t, mLuckNumber), eTypeSP_DPInt32List, 0, 1, 0,
		"", sizeof(SP_DPInt32List_t), sizeof(SP_DPInt32List_t), 0 }
};

static SP_DPMetaStruct_t gMetaXYZStructList [] = {
	{ sizeof( SP_DPMetaStruct_t ), eTypeXYZPhoneNumber, "PhoneNumber", sizeof(XYZPhoneNumber_t),
		SP_DP_ARRAY_SIZE(gMetaXYZPhoneNumber), gMetaXYZPhoneNumber },
	{ sizeof( SP_DPMetaStruct_t ), eTypeXYZEmail, "Email", sizeof(XYZEmail_t),
		SP_DP_ARRAY_SIZE(gMetaXYZEmail), gMetaXYZEmail },
	{ sizeof( SP_DPMetaStruct_t ), eTypeXYZContact, "Contact", sizeof(XYZContact_t),
		SP_DP_ARRAY_SIZE(gMetaXYZContact), gMetaXYZContact },
	gSP_DPBuiltinMetaInfo->mStructList[0],
	gSP_DPBuiltinMetaInfo->mStructList[1],
	gSP_DPBuiltinMetaInfo->mStructList[2],
	gSP_DPBuiltinMetaInfo->mStructList[3],
	gSP_DPBuiltinMetaInfo->mStructList[4],
	gSP_DPBuiltinMetaInfo->mStructList[5],
	gSP_DPBuiltinMetaInfo->mStructList[6],
	gSP_DPBuiltinMetaInfo->mStructList[7],
	gSP_DPBuiltinMetaInfo->mStructList[8],
	gSP_DPBuiltinMetaInfo->mStructList[9],
	gSP_DPBuiltinMetaInfo->mStructList[10],
	gSP_DPBuiltinMetaInfo->mStructList[11],
	gSP_DPBuiltinMetaInfo->mStructList[12],
	gSP_DPBuiltinMetaInfo->mStructList[13],
	gSP_DPBuiltinMetaInfo->mStructList[14],
	gSP_DPBuiltinMetaInfo->mStructList[15],
	gSP_DPBuiltinMetaInfo->mStructList[16]
};

static SP_DPMetaInfo_t gMetaXYZAddrbook = {
	sizeof( SP_DPMetaInfo_t ), "XYZ", "addrbook", SP_DP_ARRAY_SIZE(gMetaXYZStructList), gMetaXYZStructList
};

SP_DPMetaInfo_t * gXYZAddrbookMetaInfo = &gMetaXYZAddrbook;

XYZAddrbookPickle :: XYZAddrbookPickle( int pickleType )
{
	mImpl = NULL;
	if( SP_DataPickle::eXml == pickleType ) {
		mImpl = new SP_XmlPickle( gXYZAddrbookMetaInfo );
	} else if( SP_DataPickle::eXmlRpc == pickleType ) {
		mImpl = new SP_XmlRpcPickle( gXYZAddrbookMetaInfo );
	} else if( SP_DataPickle::eJson == pickleType ) {
		mImpl = new SP_JsonPickle( gXYZAddrbookMetaInfo );
	} else if( SP_DataPickle::eProtoBuf == pickleType ) {
		mImpl = new SP_ProtoBufPickle( gXYZAddrbookMetaInfo );
	}
}
XYZAddrbookPickle :: ~XYZAddrbookPickle()
{
	if( NULL != mImpl ) delete mImpl, mImpl = NULL;
}

int XYZAddrbookPickle :: pickle( XYZPhoneNumber_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( XYZPhoneNumber_t ),
		eTypeXYZPhoneNumber, buffer );
}

int XYZAddrbookPickle :: unpickle( SP_XmlStringBuffer * buffer, XYZPhoneNumber_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeXYZPhoneNumber, structure, sizeof( XYZPhoneNumber_t ) );
}

int XYZAddrbookPickle :: pickle( XYZEmail_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( XYZEmail_t ),
		eTypeXYZEmail, buffer );
}

int XYZAddrbookPickle :: unpickle( SP_XmlStringBuffer * buffer, XYZEmail_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeXYZEmail, structure, sizeof( XYZEmail_t ) );
}

int XYZAddrbookPickle :: pickle( XYZContact_t * structure, SP_XmlStringBuffer * buffer )
{
	if( NULL == mImpl ) return -1;
	return mImpl->pickle( structure, sizeof( XYZContact_t ),
		eTypeXYZContact, buffer );
}

int XYZAddrbookPickle :: unpickle( SP_XmlStringBuffer * buffer, XYZContact_t * structure )
{
	if( NULL == mImpl ) return -1;
	return mImpl->unpickle( buffer->getBuffer(), buffer->getSize(),
		eTypeXYZContact, structure, sizeof( XYZContact_t ) );
}


int XYZAddrbookPickle :: freeFields( XYZPhoneNumber_t & structure )
{
	SP_DPAlloc alloc( gXYZAddrbookMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeXYZPhoneNumber );
}

int XYZAddrbookPickle :: deepCopy( const XYZPhoneNumber_t * src, XYZPhoneNumber_t * dest )
{
	SP_DPAlloc alloc( gXYZAddrbookMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeXYZPhoneNumber, dest, sizeof( *dest ) );
}

int XYZAddrbookPickle :: freeFields( XYZEmail_t & structure )
{
	SP_DPAlloc alloc( gXYZAddrbookMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeXYZEmail );
}

int XYZAddrbookPickle :: deepCopy( const XYZEmail_t * src, XYZEmail_t * dest )
{
	SP_DPAlloc alloc( gXYZAddrbookMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeXYZEmail, dest, sizeof( *dest ) );
}

int XYZAddrbookPickle :: freeFields( XYZContact_t & structure )
{
	SP_DPAlloc alloc( gXYZAddrbookMetaInfo );
	return alloc.free( &structure, sizeof( structure ), eTypeXYZContact );
}

int XYZAddrbookPickle :: deepCopy( const XYZContact_t * src, XYZContact_t * dest )
{
	SP_DPAlloc alloc( gXYZAddrbookMetaInfo );
	return alloc.deepCopy( src, sizeof( *src ), eTypeXYZContact, dest, sizeof( *dest ) );
}

