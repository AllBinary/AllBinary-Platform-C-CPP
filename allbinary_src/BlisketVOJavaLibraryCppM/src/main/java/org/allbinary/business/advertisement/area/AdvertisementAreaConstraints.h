
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomSearchHelper;
class DisplayInBrowserContraints;
class DisplayInBrowserContraintsInterface;
class TwoDimensionalConstraint;
class TwoDimensionalConstraintInterface;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"
class AdvertisementAreaData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvertisementAreaConstraints
            : public virtual Object
        , public virtual AdvertisementAreaConstraintsInterface {

    private: DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface;

    private: TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface;

public: AdvertisementAreaConstraints(Document* document);

    public: void setDisplayInBrowserContraints(DisplayInBrowserContraintsInterface* displayInBrowserContraintsInterface);

    public: void getTwoDimensionContraints(TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface);

    public: DisplayInBrowserContraintsInterface* getDisplayInBrowserContraints();

    public: TwoDimensionalConstraintInterface* getTwoDimensionContraints();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREACONSTRAINTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREACONSTRAINTS_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_AREA_ADVERTISEMENTAREACONSTRAINTS_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraints.h>)
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraints.h>
#endif
#if __has_include(<org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>)
#include <org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h>
#endif
#if __has_include(<org/allbinary/logic/control/contraints/size/TwoDimensionalConstraint.h>)
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraint.h>
#endif
#if __has_include(<org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>)
#include <org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaConstraintsInterface.h"
#endif
#if __has_include("org/allbinary/business/advertisement/area/AdvertisementAreaData.h")
#include "org/allbinary/business/advertisement/area/AdvertisementAreaData.h"
#endif

        #endif
    
