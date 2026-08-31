
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_PATHPARSER_H
        #define ORG_ALLBINARY_ANIMATION_PATHPARSER_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Double.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StringBuffer.h"
#include "FixedPoint.h"
#include "PGUtil.h"

class PathParser
            : public Object
         {
        

    static std::vector<string> tokenize(string d);

    public static int32_t parsePath(string d, std::vector<int32_t> outX, std::vector<int32_t> outY, int32_t maxPoints);

    static bool isCommand(string tok);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_PATHPARSER_H
