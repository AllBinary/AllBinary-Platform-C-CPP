
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapCellPositionEvent.h"
#include "GeographicMapCellPositionEventHandler.h"

class GeographicMapCellPositionEventUtil
            : public Object
         {

    private: GeographicMapCellPositionEvent geographicMapCellPositionEvent;

    private: const GeographicMapCellPositionEventHandler geographicMapCellPositionEventHandler = GeographicMapCellPositionEventHandler::getInstance();

public: GeographicMapCellPositionEventUtil(Object* anyType){
this->geographicMapCellPositionEvent= GeographicMapCellPositionEvent(anyType, CellPositionFactory::getInstance().NONE);
    
}


                //@Throws(Exception.constructor)
            
    public: void update(GeographicMapCellPositionTracking geographicMapCellPositionTracking){
this->geographicMapCellPositionEvent.setGeographicMapCellPosition(geographicMapCellPositionTracking.getCurrentGeographicMapCellPosition());
    
this->geographicMapCellPositionEventHandler.fireEvent(this->geographicMapCellPositionEvent);
    
}


                //@Throws(Exception.constructor)
            
    public: void remove(GeographicMapCellPositionTracking geographicMapCellPositionTracking){
this->geographicMapCellPositionEvent.setGeographicMapCellPosition(geographicMapCellPositionTracking.getCurrentGeographicMapCellPosition());
    
this->geographicMapCellPositionEventHandler.fireRemoveEvent(this->geographicMapCellPositionEvent);
    
}


};

            

