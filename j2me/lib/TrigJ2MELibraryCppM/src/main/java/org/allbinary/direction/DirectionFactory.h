
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class CommonPhoneStrings;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Direction;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DirectionFactory
            : public virtual Object
         {

    private: static DirectionFactory* instance_owner();
    private: static DirectionFactory* instance;

    public: static DirectionFactory* getInstance();

    public: const std::string NAME = "DIRECTION";

    public: Direction* LEFT;

    public: Direction* RIGHT;

    public: Direction* DOWN;

    public: Direction* UP;

    public: Direction* UP_LEFT;

    public: Direction* UP_RIGHT;

    public: Direction* DOWN_LEFT;

    public: Direction* DOWN_RIGHT;

    public: Direction* NOT_BORDERED_WITH;

    public: Direction* NO_DIRECTION;

    public: Direction* TOP;

    public: Direction* BOTTOM;

    public: Direction* ALL_DIRECTION;

private: DirectionFactory();

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/direction/Direction.h")
#include "org/allbinary/direction/Direction.h"
#endif

        #endif
    
