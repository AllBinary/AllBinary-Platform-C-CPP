
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
        



        #ifndef VIEWS_ADMIN_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSCOMPONENT_CPP
        #define VIEWS_ADMIN_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSCOMPONENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/admin/storefront/statistics/StoreFrontStatisticsComponent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/context/modules/storefront/StoreFrontFactory.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/RealTimeStoreFrontStatistics.h>

      
#include <org/allbinary/business/context/modules/storefront/statistics/RealTimeStoreFrontStatisticsView.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StoreFrontStatisticsComponent::StoreFrontStatisticsComponent(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->newStoreFrontInterface= dynamic_cast<StoreFrontInterface*>(StoreFrontFactory::getInstance(transformInfoInterface->getStoreName()));
    
this->domNodeInterface= new RealTimeStoreFrontStatisticsView(new RealTimeStoreFrontStatistics(this->newStoreFrontInterface), this->getWeblisketSession()->getRole());
    
}


    auto StoreFrontStatisticsComponent::addDomNodeInterfaces() -> void{
this->addDomNodeInterface(dynamic_cast<DomNodeInterface*>(this->domNodeInterface));
    
}


                //@Throws(Exception.constructor)
            
    auto StoreFrontStatisticsComponent::view() -> std::string{

        try {
            this->addDomNodeInterfaces();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HttpStoreComponentView::view();;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_ADMIN_STOREFRONT_STATISTICS_STOREFRONTSTATISTICSCOMPONENT_CPP
