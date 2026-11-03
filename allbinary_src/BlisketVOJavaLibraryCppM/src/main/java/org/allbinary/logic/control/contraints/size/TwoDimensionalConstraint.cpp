
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraint.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#include "org/allbinary/logic/control/contraints/size/SizeConstraintInterface.h"


TwoDimensionalConstraint::TwoDimensionalConstraint(Node* node){
}


    auto TwoDimensionalConstraint::getHeight() -> SizeConstraintInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->heightSizeConstraintInterface;
    
}


    auto TwoDimensionalConstraint::getWidth() -> SizeConstraintInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->widthSizeConstraintInterface;
    
}


    auto TwoDimensionalConstraint::setHeight(SizeConstraintInterface* heightSizeConstraintInterface) -> void{
this->heightSizeConstraintInterface= heightSizeConstraintInterface;
    
}


    auto TwoDimensionalConstraint::setWidth(SizeConstraintInterface* widthSizeConstraintInterface) -> void{
this->widthSizeConstraintInterface= widthSizeConstraintInterface;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_CPP
