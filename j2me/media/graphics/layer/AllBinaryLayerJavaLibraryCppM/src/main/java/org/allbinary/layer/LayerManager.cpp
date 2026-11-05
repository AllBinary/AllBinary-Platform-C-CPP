
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERMANAGER_CPP
        #define ORG_ALLBINARY_LAYER_LAYERMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/LayerManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/SynchObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManagerLoggingBase.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/Layer.h"


LayerManager::LayerManager(LayerManagerLoggingBase* layerManagerLogging) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), systemWrapper(ABSystemWrapper::getInstance()), tsUtil(TsUtil::getInstance()), list(new BasicArrayListD()), anyType(new SynchObject()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->layerManagerLogging= layerManagerLogging;
    
}


    auto LayerManager::contains(AllBinaryLayer* layerInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->contains(layerInterface);;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManager::update(AllBinaryLayer* layerInterface) -> void{

    bool had = this->list->remove(layerInterface);;
    

                        if(had)
                        
                                    {
                                    
    AllBinaryLayer* nextLayerInterface;;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextLayerInterface= dynamic_cast<AllBinaryLayer*>(this->list->get(index));
    

                        if(layerInterface->getZP() > nextLayerInterface->getZP())
                        
                                    {
                                    this->list->addAt(index, layerInterface);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
}

this->list->add(layerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto LayerManager::insert(AllBinaryLayer* layerInterface) -> void{

    AllBinaryLayer* nextLayerInterface;;
    

    int32_t size = this->list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextLayerInterface= dynamic_cast<AllBinaryLayer*>(this->list->get(index));
    

                        if(layerInterface->getZP() > nextLayerInterface->getZP())
                        
                                    {
                                    this->appendAt(layerInterface, index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
}

this->append(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManager::append(AllBinaryLayer* layerInterface) -> void{
this->layerManagerLogging->append(layerInterface);
    
this->list->add(layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManager::appendAt(AllBinaryLayer* layerInterface, int32_t index) -> void{
this->layerManagerLogging->appendAt(layerInterface, index);
    
this->list->addAt(index, layerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManager::remove(AllBinaryLayer* layerInterface) -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->layerManagerLogging->remove(layerInterface);
    

    bool result = this->list->remove(layerInterface);;
    
this->layerManagerLogging->removeResult(this, layerInterface, result);
    


}


    auto LayerManager::getLayerAt(int32_t index) -> Layer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<Layer*>(this->list->objectArray[index]);
    
}


    auto LayerManager::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->size();;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManager::cleanup() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        
this->list->clear();
    
this->layerManagerLogging->clear();
    
this->tsUtil->gc();
    
this->tsUtil->gc();
    


}


    auto LayerManager::paint(Graphics* g, int32_t x, int32_t y) -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this->anyType) 

        //mutex.withLock
        

    Layer* comp;;
    




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {
comp= dynamic_cast<Layer*>(this->list->objectArray[index]);
    

                        if(comp != 
                                    nullptr
                                 && comp->isVisible())
                        
                                    {
                                    comp->paint(g);
    

                                    }
                                
}



}




        #endif //ORG_ALLBINARY_LAYER_LAYERMANAGER_CPP
