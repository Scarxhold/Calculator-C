#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ btn_percent;
	protected:

	protected:



	private: System::Windows::Forms::Button^ btn_divide;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ btn_product;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ btn_dot;


	private: System::Windows::Forms::Button^ btn_equal;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btn_product = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::Color::White;
			this->result_label->Location = System::Drawing::Point(27, 20);
			this->result_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(316, 65);
			this->result_label->TabIndex = 0;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::Color::White;
			this->btn_ac->Location = System::Drawing::Point(13, 110);
			this->btn_ac->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(67, 49);
			this->btn_ac->TabIndex = 1;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->ForeColor = System::Drawing::Color::White;
			this->btn_minus_plus->Location = System::Drawing::Point(100, 110);
			this->btn_minus_plus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(67, 49);
			this->btn_minus_plus->TabIndex = 2;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->ForeColor = System::Drawing::Color::White;
			this->btn_percent->Location = System::Drawing::Point(189, 110);
			this->btn_percent->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(67, 49);
			this->btn_percent->TabIndex = 3;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btn_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_divide->ForeColor = System::Drawing::Color::Black;
			this->btn_divide->Location = System::Drawing::Point(276, 110);
			this->btn_divide->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(67, 49);
			this->btn_divide->TabIndex = 4;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(13, 174);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(100, 174);
			this->button6->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 49);
			this->button6->TabIndex = 6;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(189, 174);
			this->button7->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 49);
			this->button7->TabIndex = 7;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_product
			// 
			this->btn_product->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btn_product->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_product->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_product->ForeColor = System::Drawing::Color::Black;
			this->btn_product->Location = System::Drawing::Point(276, 174);
			this->btn_product->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_product->Name = L"btn_product";
			this->btn_product->Size = System::Drawing::Size(67, 49);
			this->btn_product->TabIndex = 8;
			this->btn_product->Text = L"x";
			this->btn_product->UseVisualStyleBackColor = false;
			this->btn_product->Click += gcnew System::EventHandler(this, &MyForm::btn_product_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(13, 240);
			this->button9->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 49);
			this->button9->TabIndex = 9;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(100, 240);
			this->button10->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 49);
			this->button10->TabIndex = 10;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(189, 240);
			this->button11->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 49);
			this->button11->TabIndex = 11;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::Color::Black;
			this->btn_minus->Location = System::Drawing::Point(276, 240);
			this->btn_minus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(67, 49);
			this->btn_minus->TabIndex = 12;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Gray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(13, 304);
			this->button13->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 49);
			this->button13->TabIndex = 13;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Gray;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(100, 304);
			this->button14->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(67, 49);
			this->button14->TabIndex = 14;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Gray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(189, 304);
			this->button15->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(67, 49);
			this->button15->TabIndex = 15;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::Color::Black;
			this->btn_plus->Location = System::Drawing::Point(276, 304);
			this->btn_plus->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(67, 49);
			this->btn_plus->TabIndex = 16;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gray;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(13, 368);
			this->button17->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(154, 49);
			this->button17->TabIndex = 17;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::Gray;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::Color::White;
			this->btn_dot->Location = System::Drawing::Point(189, 368);
			this->btn_dot->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(67, 49);
			this->btn_dot->TabIndex = 19;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->ForeColor = System::Drawing::Color::Black;
			this->btn_equal->Location = System::Drawing::Point(276, 368);
			this->btn_equal->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(67, 49);
			this->btn_equal->TabIndex = 20;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(69)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->ClientSize = System::Drawing::Size(357, 452);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btn_product);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->result_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
			this->result_label->ForeColor = Color::White;
			Button^ button = safe_cast<Button^>(sender);

			if (this->result_label->Text == "0" || is_equal) {
				this->result_label->Text = button->Text;
				is_equal = false;
			}
			else
				this->result_label->Text = this->result_label->Text + button->Text; 
		}
        
	    private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('+');
	    }

        private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('-');
        }

        private: System::Void btn_product_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('*');
        }

        private: System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('/');
        }

		private: System::Void math_action(char action) {
			this->first_num = System::Convert::ToDouble(this->result_label->Text);
			this->user_action = action;
			this->result_label->Text = "0";
		}

	    private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
			if (user_action == ' ')
				return;
			float second = System::Convert::ToDouble(this->result_label->Text);
			float res;
			switch (this->user_action) {
			    case '+': res = this->first_num + second;
				    break;
				case '-': res = this->first_num - second;
					break;
				case '*': res = this->first_num * second;
					break;
				case '%': res = this->first_num * second / 100;
					break;
				case '/': 
					if (second == 0) {
						this->result_label->ForeColor = Color::Red;
						res = 0;
						MessageBox::Show(this, "На 0 не делят даун", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					res = this->first_num / second;
					break;
			}
			this->is_equal = true;
			this->result_label->Text = System::Convert::ToString(res);
	    }

	    private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
			this->result_label->Text = "0";
			this->result_label->ForeColor = Color::White;
			this->first_num = 0;
			this->user_action = ' ';
			this->is_equal = false;
	    }

	    private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
			float num = System::Convert::ToDouble(this->result_label->Text);
			num *= -1;
			this->result_label->Text = System::Convert::ToString(num);
	    }

	    private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
			math_action('%');
	    }

	    private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ text = this->result_label->Text;
			if (!text->Contains(",")) {
				this->result_label->Text = text + ",";

			}
	    }
    };
}
 