#include "FsDiff.h"
#include "bsdiff//bspatch.h"
#include "bsdiff//bsdiff.h"
#include "FsException.h"

int fsdiff_create_patch( char *patchFile, char *oldFile, char *newFile )
{
	int result = 0;
	try
	{
		//create a diff patch
		bsdiff_create_patch(patchFile,
			oldFile,
			newFile);
	}
	catch (fs_exception* e)
	{
		result = 1;
	}
	return result;
}

int fsdiff_patch_file( char *patchFile, char *oldFile, char *newFile )
{
	int result = 0;
	try
	{
		bsdiff_patch_file(patchFile,
			oldFile,
			newFile);
	}
	catch (fs_exception* e)
	{
		result = 1;
	}
	return result;
}
