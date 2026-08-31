
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

            #include "../../../../../../java/lang/Object.h"
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TwoDimensionalConstraintInterface.h"
#include "SizeConstraintInterface.h"

class TwoDimensionalConstraint
            : public Object
        : public TwoDimensionalConstraintInterface {
        

    private: widthSizeConstraintInterface: SizeConstraintInterface;

    private: heightSizeConstraintInterface: SizeConstraintInterface;

public constructor (Node node);

    public SizeConstraintInterface getHeight();

    public SizeConstraintInterface getWidth();

    public setHeight(SizeConstraintInterface heightSizeConstraintInterface);

    public setWidth(SizeConstraintInterface widthSizeConstraintInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_H
