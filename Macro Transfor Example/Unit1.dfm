object Form1: TForm1
  Left = 192
  Top = 127
  Width = 610
  Height = 362
  Caption = 'Macro '#36681#25563#22120
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 241
    Height = 289
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = #32048#26126#39636
    Font.Style = []
    ParentFont = False
    ScrollBars = ssBoth
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 256
    Top = 8
    Width = 225
    Height = 289
    ScrollBars = ssBoth
    TabOrder = 1
  end
  object Button1: TButton
    Left = 488
    Top = 8
    Width = 89
    Height = 89
    Caption = #36681#25563
    TabOrder = 2
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 488
    Top = 104
    Width = 89
    Height = 137
    Caption = #23567#25976#20301
    TabOrder = 3
    object RadioButton1: TRadioButton
      Left = 8
      Top = 24
      Width = 65
      Height = 17
      Caption = #19981#38480
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = RadioButton1Click
    end
    object RadioButton2: TRadioButton
      Left = 8
      Top = 40
      Width = 65
      Height = 17
      Caption = '0 '#20301
      TabOrder = 1
      OnClick = RadioButton2Click
    end
    object RadioButton3: TRadioButton
      Left = 8
      Top = 56
      Width = 65
      Height = 17
      Caption = '1 '#20301
      TabOrder = 2
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 8
      Top = 72
      Width = 65
      Height = 17
      Caption = '2 '#20301
      TabOrder = 3
      OnClick = RadioButton4Click
    end
    object RadioButton5: TRadioButton
      Left = 8
      Top = 88
      Width = 65
      Height = 17
      Caption = '3 '#20301
      TabOrder = 4
      OnClick = RadioButton5Click
    end
    object RadioButton6: TRadioButton
      Left = 8
      Top = 104
      Width = 65
      Height = 17
      Caption = '4 '#20301
      TabOrder = 5
      OnClick = RadioButton6Click
    end
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = 'Text File'
    Filter = 'Text File|*.txt|All File|*.*'
    Left = 16
    Top = 16
  end
  object MainMenu1: TMainMenu
    Left = 48
    Top = 16
    object MI_File: TMenuItem
      Caption = #27284#26696
      object MI_Open: TMenuItem
        Caption = #38283#21855'Macro'#27284
        OnClick = MI_OpenClick
      end
      object MI_SaveAs: TMenuItem
        Caption = #21478#23384'CSV'#27284
        OnClick = MI_SaveAsClick
      end
    end
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'CSV File'
    Filter = 'CSV File|*.csv|Text File|*.txt|All File|*.*'
    Left = 16
    Top = 48
  end
end
