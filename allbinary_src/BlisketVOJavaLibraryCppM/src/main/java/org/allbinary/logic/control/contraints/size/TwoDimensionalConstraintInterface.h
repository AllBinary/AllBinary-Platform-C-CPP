
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINTINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINTINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/contraints/size/SizeConstraintInterface.h"

class TwoDimensionalConstraintInterface {

    public: virtual SizeConstraintInterface* getHeight() = 0;

    public: virtual SizeConstraintInterface* getWidth() = 0;

    public: virtual void setHeight(SizeConstraintInterface* heightSizeConstraintInterface) = 0;

    public: virtual void setWidth(SizeConstraintInterface* widthSizeConstraintInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINTINTERFACE_H
