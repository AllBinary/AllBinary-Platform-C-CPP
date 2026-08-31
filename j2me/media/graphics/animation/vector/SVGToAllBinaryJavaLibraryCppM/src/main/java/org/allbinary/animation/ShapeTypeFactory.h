
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShapeType.h"

class ShapeTypeFactory
            : public Object
         {
        

    private: static const instance: ShapeTypeFactory = new ShapeTypeFactory();

    public static ShapeTypeFactory getInstance();

    public const KEY_LINE: string = "line";

    public const KEY_CIRCLE: string = "circle";

    public const KEY_RECTANGLE: string = "rectangle";

    public const KEY_RECT: string = "rect";

    public const LINE: ShapeType = new ShapeType(KEY_LINE);

    public const CIRCLE: ShapeType = new ShapeType(KEY_CIRCLE);

    public const RECTANGLE: ShapeType = new ShapeType(KEY_RECTANGLE);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SHAPETYPEFACTORY_H
