
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraints.h>

      
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>

      
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraint.h>

      
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AdvertisementAreaConstraintsInterface.h"
#include "AdvertisementAreaData.h"

class AdvertisementAreaConstraints
            : public Object
        : public AdvertisementAreaConstraintsInterface {

    private: DisplayInBrowserContraintsInterface displayInBrowserContraintsInterface;

    private: TwoDimensionalConstraintInterface twoDimensionConstraintsInterface;

public: AdvertisementAreaConstraints(Document document){

    Node node = DomSearchHelper::getNode(AdvertisementAreaData::getInstance().NAME, document.getChildNodes());;
    
this->displayInBrowserContraintsInterface= DisplayInBrowserContraints(node);
    
this->twoDimensionConstraintsInterface= TwoDimensionalConstraint(node);
    
}


    public: void setDisplayInBrowserContraints(DisplayInBrowserContraintsInterface displayInBrowserContraintsInterface){
this->displayInBrowserContraintsInterface= displayInBrowserContraintsInterface;
    
}


    public: void getTwoDimensionContraints(TwoDimensionalConstraintInterface twoDimensionConstraintsInterface){
this->twoDimensionConstraintsInterface= twoDimensionConstraintsInterface;
    
}


    public: DisplayInBrowserContraintsInterface getDisplayInBrowserContraints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->displayInBrowserContraintsInterface;
    
}


    public: TwoDimensionalConstraintInterface getTwoDimensionContraints(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->twoDimensionConstraintsInterface;
    
}


};

            

