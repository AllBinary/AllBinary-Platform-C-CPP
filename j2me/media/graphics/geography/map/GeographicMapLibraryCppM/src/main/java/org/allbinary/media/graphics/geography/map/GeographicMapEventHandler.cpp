
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeographicMapEventHandler: public BasicEventHandler {

    private: static GeographicMapEventHandler* instance() { static std::unique_ptr<GeographicMapEventHandler> value(new GeographicMapEventHandler()); return value.get(); }

    public: static GeographicMapEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GeographicMapEventHandler::instance();
    
}


    private: BasicArrayList* list = new BasicArrayListD();

private: GeographicMapEventHandler(){
}


    public: void addListener(AllBinaryGameLayer* gameLayer){

                        if(!this->list->contains(gameLayer))
                        
                                    {
                                    this->list->add(gameLayer);
    

                                    }
                                
}


    public: void removeAllListeners(){
this->list->clear();
    
super.removeAllListeners();
    
}


    public: void removeListener(EventListenerInterface* eventListenerInterface){
this->list->remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


    public: void fireEvent(){




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    AllBinaryGameLayer* gameLayer = dynamic_cast<AllBinaryGameLayer*>(this->list->get(index));;
    
gameLayer->move();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

}


};

            

