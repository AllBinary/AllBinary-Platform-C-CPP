
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#include "org/allbinary/logic/control/contraints/size/SizeConstraintInterface.h"

class TwoDimensionalConstraint
            : public Object
        , public TwoDimensionalConstraintInterface {

    private: SizeConstraintInterface* widthSizeConstraintInterface;

    private: SizeConstraintInterface* heightSizeConstraintInterface;

public: TwoDimensionalConstraint(Node* node);

    public: SizeConstraintInterface* getHeight();

    public: SizeConstraintInterface* getWidth();

    public: void setHeight(SizeConstraintInterface* heightSizeConstraintInterface);

    public: void setWidth(SizeConstraintInterface* widthSizeConstraintInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_H
