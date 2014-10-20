#ifndef _FS_EXCEPTION_H_
#define _FS_EXCEPTION_H_

#include <exception>

class fs_exception: public std::exception
{

public:

	fs_exception(const char *what)
		: m_what(what)
	{
	}

	//! Constructs parse error
	fs_exception(const char *what, void *where)
		: m_what(what)
		, m_where(where)
	{
	}

	//! Gets human readable description of error.
	//! \return Pointer to null terminated description of the error.
	virtual const char *what() const throw()
	{
		return m_what;
	}

	//! Gets pointer to character data where error happened.
	//! Ch should be the same as char type of xml_document that produced the error.
	//! \return Pointer to location within the parsed string where error occured.
	template<class Ch>
	Ch *where() const
	{
		return reinterpret_cast<Ch *>(m_where);
	}

private:  

	const char *m_what;
	void *m_where;

};

#endif