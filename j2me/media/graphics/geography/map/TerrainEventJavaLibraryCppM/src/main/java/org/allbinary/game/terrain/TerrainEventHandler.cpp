
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TerrainEventListener.h"
#include "TerrainEvent.h"
#include "TerrainEventListenerInterface.h"

class TerrainEventHandler: public BasicEventHandler {

    private: static Hashtable<any, any> hashtable = NullUtil::getInstance().NULL_TABLE;

    public: static void init(){
TerrainEventHandler::hashtable= Hashtable<any, any>();
    
}


    public: static TerrainEventHandler getInstance(Object* anyType){

    Object* eventHandlerCanBeNull = TerrainEventHandler::hashtable.get(anyType);;
    

                        if(eventHandlerCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    eventHandlerCanBeNull= TerrainEventHandler();
    
TerrainEventHandler::hashtable.put(anyType, eventHandlerCanBeNull);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return eventHandlerCanBeNull as TerrainEventHandler;
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: TerrainEventHandler(){
}


    public: void addListener(TerrainEventListener terrainEventListener){

                        if(!this->list.contains(terrainEventListener))
                        
                                    {
                                    this->list.add(terrainEventListener);
    

                                    }
                                
}


    public: void removeAllListeners(){
this->list.clear();
    
super.removeAllListeners();
    
}


    public: void removeListener(EventListenerInterface eventListenerInterface){
this->list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject eventObject){




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {

        try {
            
    TerrainEventListener terrainEventListener = this->list.get(index) as TerrainEventListener;;
    
terrainEventListener.onTerrainEvent(eventObject as TerrainEvent);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    TerrainEventListenerInterface terrainEventListenerInterface = eventListenerInterface as TerrainEventListenerInterface;;
    
terrainEventListenerInterface.onTerrainEvent(eventObject as TerrainEvent);
    
}


};

            

