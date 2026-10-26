
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Direction.h"

class DirectionFactory
            : public Object
         {

    private: static DirectionFactory instance() { return DirectionFactory(); }

    public: static DirectionFactory getInstance();

    public: const std::string NAME = "DIRECTION";

    public: const Direction LEFT = Direction(CommonPhoneStrings::getInstance().LEFT, "WEST", 0, 1);

    public: const Direction RIGHT = Direction(CommonPhoneStrings::getInstance().RIGHT, "EAST", 1, 0);

    public: const Direction DOWN = Direction(CommonPhoneStrings::getInstance().DOWN, "SOUTH", 2, 0);

    public: const Direction UP = Direction(CommonPhoneStrings::getInstance().UP, "NORTH", 3, 0);

    public: Direction UP_LEFT;

    public: Direction UP_RIGHT;

    public: Direction DOWN_LEFT;

    public: Direction DOWN_RIGHT;

    public: const Direction NOT_BORDERED_WITH = Direction("NOT_BORDERED_WITH", "NOT_BORDERED_WITH", 8, 0);

    public: const Direction NO_DIRECTION = Direction("NO_DIRECTION", "NO_DIRECTION", 9, 0);

    public: const Direction TOP = Direction("TOP", "TOP", 10, 0);

    public: const Direction BOTTOM = Direction("BOTTOM", "BOTTOM", 11, 0);

    public: const Direction ALL_DIRECTION = Direction("ALL_DIRECTION", "ALL_DIRECTION", 12, 0);

private: DirectionFactory();

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H
