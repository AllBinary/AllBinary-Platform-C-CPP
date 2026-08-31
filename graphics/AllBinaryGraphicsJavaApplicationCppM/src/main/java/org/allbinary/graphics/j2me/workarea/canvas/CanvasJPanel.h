
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_H

            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../java/lang/Double.h"
        
#include <java/awt.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/MutableTreeNode.h>

      
#include <org/allbinary/animation/VectorExplosionGenerator.h>

      
#include <org/allbinary/animation/VectorMirrorGenerator.h>

      
#include <org/allbinary/animation/vector/VectorCenterGenerator.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/j2me/GraphicsException.h>

      
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJTreeJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/GraphicItemInterface.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/LinesGraphicItem.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/MouseStrings.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/Points.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h>

      
#include <org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h>

      
#include <org/allbinary/graphics/pipeline/RandomRotationFactory.h>

      
#include <org/allbinary/log/LOGGING.h>

      
#include <org/allbinary/logic/communication/log/GuiLog.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/math/PositionStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "MouseListener.h"
#include "MouseMotionListener.h"
#include "KeyListener.h"
#include "IntegerDimension.h"
#include "CanvasTreeLabel.h"
#include "Color.h"
#include "Grid.h"
#include "Dimension.h"
#include "CanvasDom.h"
#include "GridLayout.h"
#include "Graphics.h"
#include "MouseEvent.h"
#include "KeyEvent.h"

class CanvasJPanel: public javax.swing.JPanel: public java.awt.event.MouseListener, public java.awt.event.MouseMotionListener, public java.awt.event.KeyListener, public MyGraphicItemEventListener {
        

    private: static frame: int32_t = 0;

    private: static const gridColor: Color = new Color(BasicColorFactory.getInstance()!.WHITE.intValue());

    private: static const backgroundColor: Color = new Color(BasicColorFactory.getInstance()!.CLEAR_COLOR.intValue());

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const guiLog: GuiLog = GuiLog.getInstance()!;

    private: const gameInputStrings: GameInputStrings = GameInputStrings.getInstance()!;

    private: selectedTool: GraphicItemInterface = 
                null
            ;

    private: graphicItemHashMap: HashMap<any, any>;

    private: canvasDimension: IntegerDimension;

    private: angle: double = 0;

    private: canvasTreeNode: DefaultMutableTreeNode;

    private: frameLabel: CanvasTreeLabel;

    private: workAreaJTreeJPanel: WorkAreaJTreeJPanel;

    private: const grid: Grid;

public constructor (WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, int32_t x, int32_t y);

public constructor (WorkAreaJTreeJPanel workAreaJTreeJPanel, Dimension dimension, CanvasDom canvasDom);

                //@Throws(Exception.constructor)
            
    initMyComponents();

    public MutableTreeNode getTreeNode();

    initComponents();

                //@Throws(Exception.constructor)
            
    public setCanvasSize(int32_t x, int32_t y);

    public setGrid(GPoint point);

    public setGrid(int32_t xSize, int32_t ySize);

                //@Throws(Exception.constructor)
            
    public setDefaultGrid();

    public double getAngle();

    public setAngle(double angle);

    public addAngle(double angle);

    public explodeAll();

                //@Throws(Exception.constructor)
            
    public explode(int32_t howMuch, int32_t explosionType);

                //@Throws(Exception.constructor)
            
    public mirror();

                //@Throws(Exception.constructor)
            
    public center();

    public setNewTool();

                //@Throws(Exception.constructor)
            
    public duplicateGraphicItem(GraphicItemInterface graphicItem);

                //@Throws(Exception.constructor)
            
    public duplicateGraphicItemHashMap(HashMap<any, any> hashMap);

    public HashMap<any, any> getGraphicItemHashMap();

    public int32_t getXPixelsPerWorkAreaPixel();

    public int32_t getYPixelsPerWorkAreaPixel();

    public GraphicItemInterface getSelectedTool();

    public drawItems(Graphics graphics);

    public drawGrid(Graphics graphics);

    public paint(Graphics graphics);

    public repaint();

                //@Throws(Exception.constructor)
            
    public Node toDom();

    public changed();

    public mouseClicked(java.awt.event.MouseEvent mouseEvent);

    public mouseEntered(java.awt.event.MouseEvent mouseEvent);

    public mouseExited(java.awt.event.MouseEvent mouseEvent);

    public mousePressed(java.awt.event.MouseEvent mouseEvent);

    public mouseReleased(java.awt.event.MouseEvent mouseEvent);

    public mouseDragged(java.awt.event.MouseEvent mouseEvent);

    public mouseMoved(java.awt.event.MouseEvent mouseEvent);

    string logMouseEvent(java.awt.event.MouseEvent mouseEvent);

    public keyPressed(java.awt.event.KeyEvent keyEvent);

    public keyReleased(java.awt.event.KeyEvent keyEvent);

    public keyTyped(java.awt.event.KeyEvent keyEvent);

    public delete(MyGraphicItemEvent evt);

    public deselect(MyGraphicItemEvent evt);

    public highlight(MyGraphicItemEvent evt);

                //@Throws(Exception.constructor)
            
    public CanvasJPanel duplicate();

                //@Throws(Exception.constructor)
            
    public duplicate(MyGraphicItemEvent event);

    public rotate(MyGraphicItemEvent event);

    public IntegerDimension getCanvasDimension();

    public setCanvasDimension(IntegerDimension canvasDimension);

    public Grid getGrid();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_CANVASJPANEL_H
