
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

            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Direction.h"

class DirectionFactory
            : public Object
         {
        

    private: static const instance: DirectionFactory = new DirectionFactory();

    public static DirectionFactory getInstance();

    public const NAME: string = "DIRECTION";

    public const LEFT: Direction = new Direction(CommonPhoneStrings.getInstance()!.LEFT, "WEST", 0, 1);

    public const RIGHT: Direction = new Direction(CommonPhoneStrings.getInstance()!.RIGHT, "EAST", 1, 0);

    public const DOWN: Direction = new Direction(CommonPhoneStrings.getInstance()!.DOWN, "SOUTH", 2, 0);

    public const UP: Direction = new Direction(CommonPhoneStrings.getInstance()!.UP, "NORTH", 3, 0);

    public const UP_LEFT: Direction;

    public const UP_RIGHT: Direction;

    public const DOWN_LEFT: Direction;

    public const DOWN_RIGHT: Direction;

    public const NOT_BORDERED_WITH: Direction = new Direction("NOT_BORDERED_WITH", "NOT_BORDERED_WITH", 8, 0);

    public const NO_DIRECTION: Direction = new Direction("NO_DIRECTION", "NO_DIRECTION", 9, 0);

    public const TOP: Direction = new Direction("TOP", "TOP", 10, 0);

    public const BOTTOM: Direction = new Direction("BOTTOM", "BOTTOM", 11, 0);

    public const ALL_DIRECTION: Direction = new Direction("ALL_DIRECTION", "ALL_DIRECTION", 12, 0);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_DIRECTION_DIRECTIONFACTORY_H
