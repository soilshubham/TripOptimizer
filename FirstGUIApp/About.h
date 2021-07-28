#pragma once
#include "Result.h"

int minimumCostSimplePath(int u, int destination);


namespace FirstGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
		{
			InitializeComponent();
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::Label^ age;
	private: System::Windows::Forms::TextBox^ nameTxt;
	private: System::Windows::Forms::TextBox^ ageTxt;


	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ComboBox^ source;
	private: System::Windows::Forms::ComboBox^ destination;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ itemGrid;
	private: System::Windows::Forms::ComboBox^ noOfitems;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ itemName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ itemVal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ itemWt;
	private: System::Windows::Forms::Button^ next;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->name = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->nameTxt = (gcnew System::Windows::Forms::TextBox());
			this->ageTxt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->source = (gcnew System::Windows::Forms::ComboBox());
			this->destination = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->itemGrid = (gcnew System::Windows::Forms::DataGridView());
			this->itemName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->itemVal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->itemWt = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->noOfitems = (gcnew System::Windows::Forms::ComboBox());
			this->next = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->name->Location = System::Drawing::Point(25, 26);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(157, 38);
			this->name->TabIndex = 0;
			this->name->Text = L"Name:";
			// 
			// age
			// 
			this->age->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->age->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->age->Location = System::Drawing::Point(25, 70);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(157, 38);
			this->age->TabIndex = 1;
			this->age->Text = L"Age:";
			// 
			// nameTxt
			// 
			this->nameTxt->BackColor = System::Drawing::SystemColors::Menu;
			this->nameTxt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->nameTxt->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameTxt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->nameTxt->Location = System::Drawing::Point(160, 26);
			this->nameTxt->Name = L"nameTxt";
			this->nameTxt->Size = System::Drawing::Size(292, 27);
			this->nameTxt->TabIndex = 2;
			// 
			// ageTxt
			// 
			this->ageTxt->BackColor = System::Drawing::SystemColors::Menu;
			this->ageTxt->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ageTxt->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageTxt->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ageTxt->Location = System::Drawing::Point(160, 72);
			this->ageTxt->Name = L"ageTxt";
			this->ageTxt->Size = System::Drawing::Size(292, 27);
			this->ageTxt->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(25, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 38);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Source";
			// 
			// source
			// 
			this->source->BackColor = System::Drawing::SystemColors::Menu;
			this->source->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->source->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->source->ForeColor = System::Drawing::SystemColors::ControlText;
			this->source->FormattingEnabled = true;
			this->source->Location = System::Drawing::Point(161, 119);
			this->source->Name = L"source";
			this->source->Size = System::Drawing::Size(291, 28);
			this->source->TabIndex = 5;
			// 
			// destination
			// 
			this->destination->BackColor = System::Drawing::SystemColors::Menu;
			this->destination->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destination->ForeColor = System::Drawing::SystemColors::ControlText;
			this->destination->FormattingEnabled = true;
			this->destination->Location = System::Drawing::Point(160, 167);
			this->destination->Name = L"destination";
			this->destination->Size = System::Drawing::Size(291, 28);
			this->destination->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(25, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 38);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Destination";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(25, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(298, 38);
			this->label3->TabIndex = 8;
			this->label3->Text = L"No. of items you carrying:";
			// 
			// itemGrid
			// 
			this->itemGrid->AllowUserToAddRows = false;
			this->itemGrid->AllowUserToDeleteRows = false;
			this->itemGrid->AllowUserToOrderColumns = true;
			this->itemGrid->AllowUserToResizeColumns = false;
			this->itemGrid->AllowUserToResizeRows = false;
			this->itemGrid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->NullValue = L"0";
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->itemGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->itemGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->itemGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->itemName, this->itemVal,
					this->itemWt
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Menu;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Menu;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->itemGrid->DefaultCellStyle = dataGridViewCellStyle5;
			this->itemGrid->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->itemGrid->Location = System::Drawing::Point(29, 281);
			this->itemGrid->Name = L"itemGrid";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(175)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->itemGrid->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->itemGrid->RowHeadersWidth = 51;
			this->itemGrid->RowTemplate->Height = 24;
			this->itemGrid->Size = System::Drawing::Size(575, 190);
			this->itemGrid->TabIndex = 10;
			// 
			// itemName
			// 
			this->itemName->HeaderText = L"Item Name";
			this->itemName->MinimumWidth = 6;
			this->itemName->Name = L"itemName";
			this->itemName->Width = 125;
			// 
			// itemVal
			// 
			this->itemVal->HeaderText = L"Item Cost";
			this->itemVal->MinimumWidth = 6;
			this->itemVal->Name = L"itemVal";
			this->itemVal->Width = 125;
			// 
			// itemWt
			// 
			this->itemWt->HeaderText = L"Item Weight";
			this->itemWt->MinimumWidth = 6;
			this->itemWt->Name = L"itemWt";
			this->itemWt->Width = 125;
			// 
			// noOfitems
			// 
			this->noOfitems->BackColor = System::Drawing::SystemColors::Menu;
			this->noOfitems->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->noOfitems->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noOfitems->ForeColor = System::Drawing::SystemColors::ControlText;
			this->noOfitems->FormattingEnabled = true;
			this->noOfitems->Location = System::Drawing::Point(274, 230);
			this->noOfitems->Name = L"noOfitems";
			this->noOfitems->Size = System::Drawing::Size(49, 28);
			this->noOfitems->TabIndex = 11;
			this->noOfitems->SelectedIndexChanged += gcnew System::EventHandler(this, &About::noOfitems_SelectedIndexChanged);
			// 
			// next
			// 
			this->next->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->next->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(175)));
			this->next->FlatAppearance->BorderSize = 0;
			this->next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->next->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->next->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->next->Location = System::Drawing::Point(237, 518);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(153, 49);
			this->next->TabIndex = 12;
			this->next->Text = L"Optimize";
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &About::next_Click);
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(630, 589);
			this->Controls->Add(this->next);
			this->Controls->Add(this->noOfitems);
			this->Controls->Add(this->itemGrid);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->destination);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->source);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ageTxt);
			this->Controls->Add(this->nameTxt);
			this->Controls->Add(this->age);
			this->Controls->Add(this->name);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"About";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trip Optimizer";
			this->Load += gcnew System::EventHandler(this, &About::About_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//This function gets called when form loads first time
		private: System::Void About_Load(System::Object^ sender, System::EventArgs^ e) {
			itemGrid->Rows->Clear();
			itemGrid->Refresh();
			// Add item to source combobox
			source->Items->AddRange(gcnew cli::array< System::Object^>(5) {
				L"Agra",
				L"Delhi",
				L"Mumbai",
				L"Jaipur",
				L"Chennai",
			});

			// Add item to destination combobox
			destination->Items->AddRange(gcnew cli::array< System::Object^>(5) {
				L"Agra",
				L"Delhi",
				L"Mumbai",
				L"Jaipur",
				L"Chennai",
			});
			noOfitems->Items->AddRange(gcnew cli::array< System::Object^>(5) {
				1,
				2,
				3,
				4,
				5
			});

			
		}

		// This gets called when you select new value of no of items you carrying
		private: System::Void noOfitems_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			int n = noOfitems->SelectedIndex;

			itemGrid->Rows->Clear();
			for (int i = 0; i <= n; i++)
			{
				itemGrid->Rows->Add();
				itemGrid->Rows[i]->HeaderCell->Value = System::Convert::ToString(i + 1);
			}
		}

		//This gets called when you click next
		private: System::Void next_Click(System::Object^ sender, System::EventArgs^ e) {
			Result^ resultForm = gcnew Result(
				nameTxt->Text,
				ageTxt->Text,
				source->SelectedItem->ToString(),
				destination->SelectedItem->ToString(),
				minimumCostSimplePath(source->SelectedIndex, destination->SelectedIndex).ToString()
			);
			resultForm->Show();
			this->Close();
		}
};
}
