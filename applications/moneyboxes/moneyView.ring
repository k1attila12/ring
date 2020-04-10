# Form/Window View - Generated Source Code File 
# Generated by the Ring 1.13 Form Designer
# Date : 31/03/2020
# Time : 11:35:18

Load "stdlibcore.ring"
Load "guilib.ring"

import System.GUI

if IsMainSourceFile() { 
	new App {
		StyleFusion()
		new moneyView { win.show() } 
		exec()
	}
}

class moneyView from WindowsViewParent
	win = new MainWindow() { 
		move(0,0)
		resize(800,600)
		setWindowTitle("The Money Game")
		setstylesheet("background-color:#505050;") 

		setWindowFlags(Qt_SplashScreen | Qt_CustomizeWindowHint) 
		Button1 = new pushbutton(win) {
			move(44,74)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("1")
			setClickEvent(Method('moneycase(1)'))
			setBtnImage(Button1,"")
			
		}
		Button2 = new pushbutton(win) {
			move(109,74)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("2")
			setClickEvent(Method('moneycase(2)'))
			setBtnImage(Button2,"")
			
		}
		Button3 = new pushbutton(win) {
			move(174,74)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("3")
			setClickEvent(Method('moneycase(3)'))
			setBtnImage(Button3,"")
			
		}
		Button4 = new pushbutton(win) {
			move(239,74)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("4")
			setClickEvent(Method('moneycase(4)'))
			setBtnImage(Button4,"")
			
		}
		Button5 = new pushbutton(win) {
			move(44,129)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("5")
			setClickEvent(Method('moneycase(5)'))
			setBtnImage(Button5,"")
			
		}
		Button6 = new pushbutton(win) {
			move(109,129)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("6")
			setClickEvent(Method('moneycase(6)'))
			setBtnImage(Button6,"")
			
		}
		Button7 = new pushbutton(win) {
			move(174,129)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("7")
			setClickEvent(Method('moneycase(7)'))
			setBtnImage(Button7,"")
			
		}
		Button8 = new pushbutton(win) {
			move(239,129)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("8")
			setClickEvent(Method('moneycase(8)'))
			setBtnImage(Button8,"")
			
		}
		Button9 = new pushbutton(win) {
			move(44,184)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("9")
			setClickEvent(Method('moneycase(9)'))
			setBtnImage(Button9,"")
			
		}
		Button10 = new pushbutton(win) {
			move(109,184)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("10")
			setClickEvent(Method('moneycase(10)'))
			setBtnImage(Button10,"")
			
		}
		Button11 = new pushbutton(win) {
			move(174,184)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("11")
			setClickEvent(Method('moneycase(11)'))
			setBtnImage(Button11,"")
			
		}
		Button12 = new pushbutton(win) {
			move(239,184)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("12")
			setClickEvent(Method('moneycase(12)'))
			setBtnImage(Button12,"")
			
		}
		Button13 = new pushbutton(win) {
			move(44,239)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("13")
			setClickEvent(Method('moneycase(13)'))
			setBtnImage(Button13,"")
			
		}
		Button14 = new pushbutton(win) {
			move(109,239)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("14")
			setClickEvent(Method('moneycase(14)'))
			setBtnImage(Button14,"")
			
		}
		Button15 = new pushbutton(win) {
			move(174,239)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("15")
			setClickEvent(Method('moneycase(15)'))
			setBtnImage(Button15,"")
			
		}
		Button16 = new pushbutton(win) {
			move(239,239)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("16")
			setClickEvent(Method('moneycase(16)'))
			setBtnImage(Button16,"")
			
		}
		Button17 = new pushbutton(win) {
			move(44,294)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("17")
			setClickEvent(Method('moneycase(17)'))
			setBtnImage(Button17,"")
			
		}
		Button18 = new pushbutton(win) {
			move(109,294)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("18")
			setClickEvent(Method('moneycase(18)'))
			setBtnImage(Button18,"")
			
		}
		Button19 = new pushbutton(win) {
			move(174,294)
			resize(55,45)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("19")
			setClickEvent(Method('moneycase(19)'))
			setBtnImage(Button19,"")
			
		}
		VideoWidget1 = new videowidget(win) {
			move(344,74)
			resize(407,266)
			setstylesheet("color:black;background-color:black;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("Arial")
			setfont(oFont)
			oFont.delete()
			playerVideoWidget1 = new qmediaplayer() { 
			setmedia(new qurl("video/start.avi"))
			 setvideooutput(VideoWidget1)
			}
			
		}
		Button20 = new pushbutton(win) {
			move(426,514)
			resize(242,46)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Close")
			setClickEvent(Method(:CloseApp))
			setBtnImage(Button20,"")
			
		}
		Label1 = new label(win) {
			move(84,16)
			resize(168,42)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,22,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Money Boxes")
			setAlignment(Qt_AlignLeft |  Qt_AlignVCenter)
		}
		Label23 = new label(win) {
			move(29,385)
			resize(148,42)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Required Money : ")
			setAlignment(Qt_AlignLeft |  Qt_AlignVCenter)
		}
		Label24 = new label(win) {
			move(39,449)
			resize(138,42)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Boxes To Open : ")
			setAlignment(Qt_AlignLeft |  Qt_AlignVCenter)
		}
		txtMoney = new lineedit(win) {
			move(194,385)
			resize(108,45)
			setstylesheet("color:black;background-color:white;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("100")
			setTextChangedEvent("")
			setcursorPositionChangedEvent("")
			seteditingFinishedEvent("")
			setreturnPressedEvent("")
			setselectionChangedEvent("")
			settextEditedEvent("")
			
		}
		txtPackages = new lineedit(win) {
			move(194,451)
			resize(108,45)
			setstylesheet("color:black;background-color:white;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("1")
			setTextChangedEvent("")
			setcursorPositionChangedEvent("")
			seteditingFinishedEvent("")
			setreturnPressedEvent("")
			setselectionChangedEvent("")
			settextEditedEvent("")
			
		}
		Label27 = new label(win) {
			move(109,513)
			resize(68,42)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Status : ")
			setAlignment(Qt_AlignLeft |  Qt_AlignVCenter)
		}
		txtStatus = new lineedit(win) {
			move(193,515)
			resize(108,45)
			setstylesheet("color:black;background-color:white;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Playing!")
			setTextChangedEvent("")
			setcursorPositionChangedEvent("")
			seteditingFinishedEvent("")
			setreturnPressedEvent("")
			setselectionChangedEvent("")
			settextEditedEvent("")
			
		}
		Button29 = new pushbutton(win) {
			move(426,451)
			resize(242,46)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,18,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("New Game")
			setClickEvent(Method(:NewGame))
			setBtnImage(Button29,"")
			
		}
		Label30 = new label(win) {
			move(438,388)
			resize(148,42)
			setstylesheet("color:#ffffff;background-color:;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("Your Money : ")
			setAlignment(Qt_AlignLeft |  Qt_AlignVCenter)
		}
		txtAmount = new lineedit(win) {
			move(574,388)
			resize(78,45)
			setstylesheet("color:black;background-color:white;")
			oFont = new qfont("",0,0,0)
			oFont.fromstring("MS Shell Dlg 2,14,-1,5,50,0,0,0,0,0,Regular")
			setfont(oFont)
			oFont.delete()
			setText("100")
			setTextChangedEvent("")
			setcursorPositionChangedEvent("")
			seteditingFinishedEvent("")
			setreturnPressedEvent("")
			setselectionChangedEvent("")
			settextEditedEvent("")
			
		}
	}

# End of the Generated Source Code File...