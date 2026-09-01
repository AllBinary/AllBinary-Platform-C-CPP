
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREACONSTRAINTS_H
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREACONSTRAINTS_H

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

public: AdvertisementAreaConstraints(Document document);

    public: void setDisplayInBrowserContraints(DisplayInBrowserContraintsInterface displayInBrowserContraintsInterface);

    public: void getTwoDimensionContraints(TwoDimensionalConstraintInterface twoDimensionConstraintsInterface);

    public: DisplayInBrowserContraintsInterface getDisplayInBrowserContraints();

    public: TwoDimensionalConstraintInterface getTwoDimensionContraints();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREACONSTRAINTS_H
