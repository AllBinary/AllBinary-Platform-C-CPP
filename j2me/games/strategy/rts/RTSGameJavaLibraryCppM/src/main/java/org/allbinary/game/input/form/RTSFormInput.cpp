
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSFormInput
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const groupCommonFactory: GroupCommonFactory = GroupCommonFactory.getInstance()!;

    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    const newUnconstructedRTSLayerInterfaceArray: std::vector<CollidableDestroyableDamageableLayer> = new Array(7);

    const groupInterfaceArray: std::vector<Group>;

    private: selectedGeographicCellPosition: GeographicMapCellPosition = SimpleGeographicMapCellPositionFactory.NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: stickyItemSelected: bool= false;

    private: selectedStickyItemIndex: int32_t= 0;

    private: selectedStickyItem: ABCustomItem = ABCustomItem.getNullInstance()!;

public constructor (std::vector<Group> groupInterfaceArray){

            super();
        
    size: int32_t = this.newUnconstructedRTSLayerInterfaceArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.newUnconstructedRTSLayerInterfaceArray[index]= CollidableDestroyableDamageableLayer.getNullInstance();
    
}

this.groupInterfaceArray= groupInterfaceArray;
    
this.hashtable.put(DirectionFactory.getInstance()!.NAME, DirectionFactory.getInstance()!.DOWN);
    

                        if(groupInterfaceArray != 
                                    null
                                )
                        
                                    {
                                    this.hashtable.put(this.groupCommonFactory!.ID, groupInterfaceArray);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
}


                //@Throws(Exception.constructor)
            
    public processAtPoint(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){

    index: int32_t = this.getIndexAt(rtsPlayerLayerInterface, point)!;;
    

                        if(index < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    scrollSelectionForm: ScrollSelectionForm = rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!;;
    

    item: ABCustomItem = scrollSelectionForm!.get(index)!;;
    

                        if(item == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this.processGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    
}


                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager layerManager){
this.setAllBinaryGameLayerManager(layerManager as AllBinaryGameLayerManager);
    
}


                //@Throws(Exception.constructor)
            
    public processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){
}


                //@Throws(Exception.constructor)
            
    public bool processSticky(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){

    index: int32_t = this.getIndexAt(rtsPlayerLayerInterface, point)!;;
    

                        if(index < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    scrollSelectionForm: ScrollSelectionForm = rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!;;
    

    item: ABCustomItem = scrollSelectionForm!.get(index)!;;
    

                        if(item == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
this.processStickyGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public processStickyGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){
}


                //@Throws(Exception.constructor)
            
    ABCustomItem getItemAt(RTSPlayerLayerInterface rtsPlayerLayerInterface, GPoint point){
this.logUtil!.putF(new StringMaker().append("Point: ")!.append(StringUtil.getInstance()!.toString(point))!.toString(), this, "getItemAt");
    

    scrollSelectionForm: ScrollSelectionForm = rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm!.getSelectedItem(point);;
    
}


                //@Throws(Exception.constructor)
            
    int32_t getIndexAt(RTSPlayerLayerInterface rtsPlayerLayerInterface, GPoint point){
this.logUtil!.putF(new StringMaker().append("Point: ")!.append(StringUtil.getInstance()!.toString(point))!.toString(), this, "getItemAt");
    

    scrollSelectionForm: ScrollSelectionForm = rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm!.getSelectedIndexForPoint(point);;
    
}


                //@Throws(Exception.constructor)
            
    CollidableDestroyableDamageableLayer getInstance(AllBinaryLayerManager layerManager, ABCustomItem aItem, GeographicMapCellPosition geographicMapCellPosition){

    item: LayerInterfaceFactoryImageItem = aItem as LayerInterfaceFactoryImageItem;;
    

    layerInterfaceFactoryInterface: LayerInterfaceFactoryInterface = item.getLayerInterfaceFactoryInterface()!;;
    

    cellPoint: GPoint = geographicMapCellPosition!.getPoint()!;;
    

                        if(layerInterfaceFactoryInterface != 
                                    null
                                )
                        
                                    {
                                    this.hashtable.put(AllBinaryGameLayerManager.ID, layerManager);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return layerInterfaceFactoryInterface!.getNextInstance(this.getHashtable(), cellPoint!.getX(), cellPoint!.getY(), cellPoint!.getZ()) as RTSLayer;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer.getNullInstance();;
    
}


    public GeographicMapCellPosition getSelectedGeographicCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedGeographicCellPosition;
    
}


    public setSelectedGeographicCellPosition(GeographicMapCellPosition selectedGeographicCellPosition){
this.logUtil!.putF(new StringMaker().append("Selected GeographicMapCellPosition: ")!.append(selectedGeographicCellPosition!.toString())!.toString(), this, "setSelectedGeographicCellPosition");
    
this.selectedGeographicCellPosition= selectedGeographicCellPosition;
    
}


    public bool isStickyItemSelected(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.stickyItemSelected;
    
}


    public setStickyItemSelected(bool stickyItemSelected){
this.stickyItemSelected= stickyItemSelected;
    
}


    public ABCustomItem getSelectedStickyItem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedStickyItem;
    
}


    public setSelectedStickyItem(ABCustomItem selectedStickyItem){
this.selectedStickyItem= selectedStickyItem;
    
}


    public int32_t getSelectedStickyItemIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedStickyItemIndex;
    
}


    public setSelectedStickyItemIndex(int32_t selectedStickyItemIndex){
this.selectedStickyItemIndex= selectedStickyItemIndex;
    
}


    public Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


};

            

