#pragma once

namespace FirstGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Result
	/// </summary>
	public ref class Result : public System::Windows::Forms::Form
	{
	public:
		String^ nameToDisplay = "user";
		String^ ageToDisplay = "N/A";
		String^ sourceToDisplay;
		String^ destinationToDisplay;
		String^ minCostToDisplay = "0";
		Result(String^ _name, String^ _age, String^ _source, String^ _destination, String^ _minCost)
		{
			InitializeComponent();
			nameToDisplay = _name;
			ageToDisplay = _age;
			sourceToDisplay = _source;
			destinationToDisplay = _destination;
			minCostToDisplay = _minCost;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Result()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ userInfo;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ minCost;

	private: System::Windows::Forms::Label^ source;
	private: System::Windows::Forms::Label^ destination;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->title = (gcnew System::Windows::Forms::Label());
			this->userInfo = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->minCost = (gcnew System::Windows::Forms::Label());
			this->source = (gcnew System::Windows::Forms::Label());
			this->destination = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->Dock = System::Windows::Forms::DockStyle::Top;
			this->title->Font = (gcnew System::Drawing::Font(L"Arial Black", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::GhostWhite;
			this->title->Location = System::Drawing::Point(0, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(630, 132);
			this->title->TabIndex = 1;
			this->title->Text = L"Overview";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userInfo
			// 
			this->userInfo->Dock = System::Windows::Forms::DockStyle::Top;
			this->userInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userInfo->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->userInfo->Location = System::Drawing::Point(0, 132);
			this->userInfo->Name = L"userInfo";
			this->userInfo->Padding = System::Windows::Forms::Padding(50, 0, 50, 0);
			this->userInfo->Size = System::Drawing::Size(630, 67);
			this->userInfo->TabIndex = 2;
			this->userInfo->Text = L"Hello Sahil (34y/o), below are your results\r\n\r\n";
			this->userInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label12->Location = System::Drawing::Point(202, 220);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(140, 38);
			this->label12->TabIndex = 4;
			this->label12->Text = L"From:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label13->Location = System::Drawing::Point(202, 258);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(140, 38);
			this->label13->TabIndex = 5;
			this->label13->Text = L"To:";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(59, 489);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(348, 59);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Minimum Cost:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// minCost
			// 
			this->minCost->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minCost->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->minCost->Location = System::Drawing::Point(381, 500);
			this->minCost->Name = L"minCost";
			this->minCost->Size = System::Drawing::Size(149, 38);
			this->minCost->TabIndex = 7;
			this->minCost->Text = L"455";
			this->minCost->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// source
			// 
			this->source->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->source->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->source->Location = System::Drawing::Point(295, 220);
			this->source->Name = L"source";
			this->source->Size = System::Drawing::Size(246, 38);
			this->source->TabIndex = 8;
			this->source->Text = L"To:";
			this->source->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// destination
			// 
			this->destination->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destination->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->destination->Location = System::Drawing::Point(295, 258);
			this->destination->Name = L"destination";
			this->destination->Size = System::Drawing::Size(246, 38);
			this->destination->TabIndex = 9;
			this->destination->Text = L"To:";
			this->destination->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Result
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(630, 589);
			this->Controls->Add(this->destination);
			this->Controls->Add(this->source);
			this->Controls->Add(this->minCost);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->userInfo);
			this->Controls->Add(this->title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Result";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trip Optimizer";
			this->Load += gcnew System::EventHandler(this, &Result::Result_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void Result_Load(System::Object^ sender, System::EventArgs^ e) {
			userInfo->Text = "Hello " + nameToDisplay + " (" + ageToDisplay + "y/o), below are your optimized results";
			source->Text = sourceToDisplay;
			destination->Text = destinationToDisplay;
			minCost->Text = "Rs. " + minCostToDisplay;
		}
};
}
