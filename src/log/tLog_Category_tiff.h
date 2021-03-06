/* --------------------------------------------------------------------------
    Copyright 2012 by Richard Albrecht
    richard.albrecht@rleofield.de
    www.rleofield.de

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ------------------------------------------------------------------------------
*/


/*! \file tLog_Category_default.h
\brief macros for logging with line, file, method, eCategory::_default and  eLevel

*/


#ifndef TLOG_DEFINE_TIFF_H
#define TLOG_DEFINE_TIFF_H

#include <string>

#include "tLog.h"


// wird bei Auslieferung in 'rimg_tiff.h' eingestellt

#ifdef L_TIFF_DEBUG
// bei Auslieferung auskommentiert
//#undef L_TIFF_DEBUG
#endif

#ifndef L_TIFF_DEBUG
// bei Auslieferung auskommentiert
//#define L_TIFF_DEBUG
#endif

using namespace rlf_tlog;


#ifdef L_TIFF_DEBUG
#define LOGT_TIFF_DEBUG(exp)  (logger().log( LfmCL(__LINE__,__FILE__,__FUNCTION__, eCategory::_default, eLevel::LDEBUG, exp ) ) )
#define LOGT_TIFF_INFO(exp)   (logger().log( LfmCL(__LINE__,__FILE__,__FUNCTION__, eCategory::_default, eLevel::INFO, (exp)  )))
#define LOGT_TIFF_WARN(exp)   (logger().log( LfmCL(__LINE__,__FILE__,__FUNCTION__, eCategory::_default, eLevel::WARN, (exp) )))
#define LOGT_TIFF_ERROR(exp)  (logger().log( LfmCL(__LINE__,__FILE__,__FUNCTION__, eCategory::_default, eLevel::LERROR, (exp)  )))
#define LOGT_TIFF_FATAL(exp)  (logger().log( LfmCL(__LINE__,__FILE__,__FUNCTION__, eCategory::_default, eLevel::FATAL, (exp) )))

#else
#define LOGT_TIFF_DEBUG(exp)   (noLogFunc())
#define LOGT_TIFF_INFO(exp)    (noLogFunc())
#define LOGT_TIFF_WARN(exp)    (noLogFunc())
#define LOGT_TIFF_ERROR(exp)   (noLogFunc())
#define LOGT_TIFF_FATAL(exp)   (noLogFunc())
#endif



#endif  // TLOG_WITH_CATEGORY_H

//EOF

