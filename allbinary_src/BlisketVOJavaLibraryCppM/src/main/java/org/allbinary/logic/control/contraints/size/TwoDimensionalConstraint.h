
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
class SizeConstraintInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TwoDimensionalConstraint
            : public virtual Object
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_SIZE_TWODIMENSIONALCONSTRAINT_H_COMPLETE
        #if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h")
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#endif
#if __has_include("org/allbinary/logic/control/contraints/size/SizeConstraintInterface.h")
#include "org/allbinary/logic/control/contraints/size/SizeConstraintInterface.h"
#endif

        #endif
    
