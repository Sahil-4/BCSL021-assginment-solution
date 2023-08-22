#include "utils.h"

// NOTE : Do not temper with this dataset else you may get error or unexpected result .
// LSCs data : Extracted from - http://rcdelhi3.ignou.ac.in/Ignou-RC-Delhi-3/userfiles/file/LSC13-4(1).pdf
struct LearnerSupportCentre lsc_dataset[] = {
    {
        ._id = 0,
        .code = "0709",
        .name = "Aryabhatta College",
        .address = "Benito Juarez Road, Anand Niketan, New Delhi- 110021",
        .coordinator = "Mr. N. M. Singh",
        .phone = "011-24110490",
        .email = "ignousc0709@gmail.com",
        .timing = "10:00 am to 5:00 pm Sunday",
        .programmes = {
            "BA", "BAG", "BCOM", "BCOMG", "MP", 
            "PGDT", "MEG", "MHD", "CTE", "BSW", 
            "MPS", "PGDRP", "MPA", "MSO", "MEC", 
            "PGDDM", "PGCCL", "PGDIPR", "PGCCP", 
            "CCP", "CHR", "MAEDS", "MATS", "MAGD", 
            "MCOM", "DCE", "MAH", "PGDIBO", "PGDEDS", 
            "MARD", "CNM", "MCOMBPCG", "BCOMAF", 
            "MCOMFT", "MADVS", "BLIS", "BCOMCAA"
        },
        .programmes_total = 37,
        .staff_academic = 9,
        .staff_non_academic = 17,
        .status = "Active"
    },
    {
        ._id = 1, 
        .code = "0719", 
        .name = "Tihar Jail", 
        .address = "Tihar Jail No. 3, Lajwanti Chowk, Hari Nagar, New Delhi - 110064", 
        .coordinator = "Sh. Praveer Kumar Singh", 
        .phone = "011-28522460", 
        .email = "tiharstudycentre@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "BAG", "BCOMG", "MEG", "MHD", 
            "MSO", "CHR", "PGCCL", "PGDIBO"
        }, 
        .programmes_total = 8, 
        .staff_academic = 1, 
        .staff_non_academic = 0, 
        .status = "Active"
    },
    {
        ._id = 2, 
        .code = "0737", 
        .name = "Atma Ram Sanatan Dharma College", 
        .address = "University of Delhi, Dhaula Kuan, New Delhi -110021", 
        .coordinator = "Dr. Kokila Negi", 
        .phone = "011-4673436", 
        .email = "ignou0737@rediffmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "BCA", "MP", "MPB", "CTPM", "CRUL", 
            "PGDMRR", "PGDESD", "MCOM", 
            "MAH", "MEC", "MPS", "MHD", "MPA", 
            "MEG", "MPB", "MSO", "MCOMBPCG", 
            "BCOMCAA", "CLTA", "PGCCC"
        }, 
        .programmes_total = 20, 
        .staff_academic = 7, 
        .staff_non_academic = 16, 
        .status = "Active"
    },
    {
        ._id = 3, 
        .code = "0767P", 
        .name = "Army Hospital (R&R)", 
        .address = "OIC TT School, Army Hospital (R&R), Delhi Cantonment, New Delhi - 110010", 
        .coordinator = "Col.(Dr.) Bharat Singh", 
        .phone = "011-23338025", 
        .email = "ignou0767@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"PGDHHM", "CHCWM"}, 
        .programmes_total = 2, 
        .staff_academic = 1, 
        .staff_non_academic = 1, 
        .status = "Active"
    },
    {
        ._id = 4, 
        .code = "0773P", 
        .name = "PMC College of Education", 
        .address = "Pratap Vihar, Kiravi Extn., Nangloi, Delhi – 110041", 
        .coordinator = "Dr. Bharati Dimri", 
        .phone = "011-25473935", 
        .email = "pmc_coll@yahoo.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "BED", "PGDHE", "PGDEMA", 
            "PGDSLM", "PGDET", "MAEDU", 
            "PGDPPED"
        }, 
        .programmes_total = 7, 
        .staff_academic = 2, 
        .staff_non_academic = 6, 
        .status = "Active"
    },
    {
        ._id = 5, 
        .code = "0775P", 
        .name = "Delhi Library Association", 
        .address = "Ranganathan Bhawan, 'C' Block, Community Centre, Naraina Vihar, New Delhi - 1100280", 
        .coordinator = "Dr. K.P. Singh", 
        .phone = "011-25774507", 
        .email = "dla_39@yahoo.co.in", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"BLIS", "MLIS", "CLIS", "PGDLAN"}, 
        .programmes_total = 4, 
        .staff_academic = 2, 
        .staff_non_academic = 4, 
        .status = "Active"
    },
    {
        ._id = 6, 
        .code = "1006", 
        .name = "Dronacharya Government College", 
        .address = "New Railway Road, Manohar Nagar, Sector 8, Gurugram, Haryana 122001", 
        .coordinator = "Dr. Virender Singh Antil", 
        .phone = "0916-336197", 
        .email = "ignou1006@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "MP", "BA", "BAG", "BCOM", 
            "BCOMG", "MEG", "MHD", 
            "BSW", "MAH", "MPS", "PGDRP", 
            "MPA", "MSO", "MEC", "PGDDM", 
            "MAPC", "BSC", "BSCG", "CPLT", 
            "BCOMAF", "BCOMCAA", 
            "MCOMBPCG", "MCOMFT"
        }, 
        .programmes_total = 23, 
        .staff_academic = 9, 
        .staff_non_academic = 18, 
        .status = "Active"
    },
    {
        ._id = 7, 
        .code = "1041", 
        .name = "Yasin Meo Degree College", 
        .address = "Nuh, District – Mewat, Haryana 122107", 
        .coordinator = "Dr. M. Imtiaz Khan", 
        .phone = "01267-271236", 
        .email = "aijazahmadnuh@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "BA", "BAG", "BCOM", "BCOMG", 
            "PGDRD", "DAFE", "CUL", "MPS"
        }, 
        .programmes_total = 8, 
        .staff_academic = 23, 
        .status = "Active"
    },
    {
        ._id = 8, 
        .code = "07124", 
        .name = "V. D. Institute Of Technology", 
        .address = "Krishan Vihar, New Delhi 110086", 
        .coordinator = "~Not Available", 
        .phone = "8447200872", 
        .email = "vditrd@yahoo.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"B.Ed", "BA", "BAG", "BCOM", "BCOMG"}, 
        .programmes_total = 5, 
        .staff_academic = 1, 
        .staff_non_academic = 3, 
        .status = "Active"
    },
    {
        ._id = 9, 
        .code = "38015D", 
        .name = "District Jail", 
        .address = "District Jail Bhondsi, Gurugram, Haryana-122002", 
        .coordinator = "Sh. Harinder Singh", 
        .phone = "0124-2265373", 
        .email = "supdt.gr@hry.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"BA", "BAG", "BCOM", "BCOMG", "CFN"}, 
        .programmes_total = 5, 
        .staff_academic = 1, 
        .status = "Active"
    },
    {
        ._id = 10, 
        .code = "38022", 
        .name = "Krishi Vigyan Kendra", 
        .address = "Shikohpur, Gurugram, Haryana-122004", 
        .coordinator = "Dr. Gaurav Papnai", 
        .phone = "0124 2019068", 
        .email = "head_kvkggn@iari.res.in", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"DWM", "APVAPFV", "COF", "CIB", "CWHM"}, 
        .programmes_total = 5, 
        .staff_academic = 1, 
        .status = "Active"
    },
    {
        ._id = 11, 
        .code = "38025", 
        .name = "Bhagini Nivedita College", 
        .address = "Kair, Near Najafgarh, New Delhi -110043", 
        .coordinator = "Mr. Vikash Chaudhary", 
        .phone = "011-28017845", 
        .email = "bncignou38025@gmail.com, bncignou38025jj22@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "BA", "BAG", "BCOM", "BCOMG", "MHD", "CRD", 
            "PGDT", "MEC", "MAH", "MSO", "MPS", 
            "PGDAC", "CTS", "DTS", "PGDRD", 
            "DWED", "CFDE", "MCOM"
        }, 
        .programmes_total = 18, 
        .staff_academic = 5, 
        .staff_non_academic = 17, 
        .status = "Active"
    },
    {
        ._id = 12, 
        .code = "38027", 
        .name = "Govt. PG College", 
        .address = "Sector -9, Gurugram, Haryana-122001", 
        .coordinator = "~Not Available", 
        .phone = "0124-2305208", 
        .email = "ignou38027@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "MEC", "MPA", "MHD", "MCOM", "MEG", 
            "MAH", "MPS", "PGDUPDL", "MSO", "MAPC"
        }, 
        .programmes_total = 10, 
        .staff_academic = 6, 
        .staff_non_academic = 7, 
        .status = "Active"
    },
    {
        ._id = 13, 
        .code = "38038", 
        .name = "Motilal Nehru College", 
        .address = "Dhaula Kuan, New Delhi-110021", 
        .coordinator = "Dr. A. M. Khan", 
        .phone = "011-24110174", 
        .email = "motilalnehru64@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {
            "BA", "BAG", "BCOM", "BCOMG", 
            "MEG", "MAH", "MPS"
        }, 
        .programmes_total = 7, 
        .staff_academic = 9, 
        .staff_non_academic = 15, 
        .status = "Active"
    },
    {
        ._id = 14, 
        .code = "38039", 
        .name = "IGNOU RC", 
        .address = "SC – 38039 Delhi Library Association Building, Ranganathan Bhawan, C-Block, Community Centre, Naraina Vihar, New Delhi-110028", 
        .coordinator = "Dr. Rachna Mohan", 
        .phone = "011-25774255", 
        .email = "rcdelhi3sc38039_1@ignou.ac.in", 
        .timing = "10:00 am to 5:00 pm Saturday", 
        .programmes = {
            "CRUL", "MAPY", "MAPC", "MAAN", 
            "CIG", "CKLC", "CJL", 
            "Prog. not available at other LSCs"
        }, 
        .programmes_total = 8, 
        .staff_academic = 2, 
        .staff_non_academic = 10, 
        .status = "Active"
    },
    {
        ._id = 15, 
        .code = "38041P", 
        .name = "Faculty of Nursing", 
        .address = "SGT University Budhera, Gurugram, Haryana- 122505", 
        .coordinator = "Dr. Sunil Kumar Dular", 
        .phone = "0124-2278173-85", 
        .email = "dean.nursing@sgtuniversity.org", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"BPCCHN"}, 
        .programmes_total = 1, 
        .staff_academic = 1, 
        .status = "In-Abeyance"
    },
    {
        ._id = 16, 
        .code = "38042", 
        .name = "Bhaskaracharya College of Applied Sciences", 
        .address = "Sec-2, Phase-1, Dwarka, New Delhi110075", 
        .coordinator = "Prof. Avneesh Mittal", 
        .phone = "011-25087597", 
        .email = "ignou38042@bcas.du.ac.in", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"CPLT", "BSCG", "PGDAC"}, 
        .programmes_total = 3, 
        .staff_academic = 7, 
        .staff_non_academic = 11, 
        .status = "Active"
    },
    {
        ._id = 17, 
        .code = "38043", 
        .name = "Bharati College", 
        .address = "University of Delhi, C-4, Janakpuri, Delhi 110058", 
        .coordinator = "Dr. Vandana Bansal", 
        .phone = "~Not Available", 
        .email = "coordinatorignoubharati@gmail.com", 
        .timing = "10:00 am to 5:00 pm Saturday", 
        .programmes = {"MEC", "MPS", "MEG", "MHD", "MCOM", "MAPC"}, 
        .programmes_total = 6, 
        .staff_academic = 7, 
        .staff_non_academic = 10, 
        .status = "Active"
    },
    {
        ._id = 18, 
        .code = "38044", 
        .name = "DPG Degree College", 
        .address = "Near Hero Honda Chowk, Marble Market, Sec-34, Gurugram, Haryana - 122001", 
        .coordinator = "Dr. Reena", 
        .phone = "9250008494", 
        .email = "dpgdegreeignou38044@gmail.com", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"BAG", "BCOMG", "BSCG", "BCA", "MEG", "MHD"}, 
        .programmes_total = 6, 
        .staff_academic = 8, 
        .staff_non_academic = 13, 
        .status = "Active"
    },
    {
        ._id = 19, 
        .code = "38045", 
        .name = "Shivaji College", 
        .address = "Raja Garden, Ring Road, New Delhi110027", 
        .coordinator = "Mr. Ashesh Kumar Jharwal", 
        .phone = "011-25116644", 
        .email = "ignou38045@shivaji.du.ac.in", 
        .timing = "10:00 am to 5:00 pm Sunday", 
        .programmes = {"BSCG", "MHD", "MCOM"}, 
        .programmes_total = 3, 
        .staff_academic = 3, 
        .staff_non_academic = 8, 
        .status = "Active"
    },
    {
        ._id = 20, 
        .code = "29059", 
        .name = "SPM College", 
        .address = "University of Delhi, Punjabi Bagh, New Delhi-110026", 
        .coordinator = "Dr. Raj Kumar", 
        .phone = "011-25224499", 
        .email = "spmcollegeedu@gmail.com", 
        .timing = "10:00am to 5:00pm Sunday", 
        .programmes = {"CES", "BSW", "MSW", "MAPY"}, 
        .programmes_total = 4, 
        .staff_academic = 1, 
        .staff_non_academic = 0, 
        .status = "In-Abeyance"
    },
    {
        ._id = 21, 
        .code = "38046", 
        .name = "Rajdhani College", 
        .address = "Raja Garden, Ring Road, New Delhi-110015", 
        .coordinator = "Prof. Rajesh Giri", 
        .phone = "011-25930752", 
        .email = "ignou@rajdhani.du.ac.in", 
        .timing = "10:00am to 5:00pm Sunday", 
        .programmes = {
            "BAG", "BAHIH", "BSC", "BCA", 
            "MCA", "PGDIS", "MAH", "MSK", "MAJY"
            }, 
        .programmes_total = 9, 
        .staff_academic = 1, 
        .staff_non_academic = 0, 
        .status = "Active"
    }
};

// Size of LSCs dataset 
int SIZE_OF_LSC_DATASET = sizeof(lsc_dataset) / sizeof(lsc_dataset[0]);


// This is not real data this is made on the basis of assumptions only 
struct CounsellingSchedule councelling_schedule_BCA_dataset[] = {
    // semester 1 
  {
    .programme = "BCA",
    .semester = 1,
    .course_code = "Subject A",
    .councillor = "Alpha",
    .session_timing = {
      "Nov 4, 2023 at 9:00 AM",
      "Nov 5, 2023 at 9:00 AM",
      "Nov 11, 2023 at 9:00 AM",
      "Nov 12, 2023 at 9:00 AM",
      "Nov 18, 2023 at 9:00 AM",
      "Nov 19, 2023 at 9:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R16"
  },
  {
    .programme = "BCA",
    .semester = 1,
    .course_code = "Subject B",
    .councillor = "Beta",
    .session_timing = {
      "Nov 4, 2023 at 11:00 AM",
      "Nov 5, 2023 at 11:00 AM",
      "Nov 11, 2023 at 11:00 AM",
      "Nov 12, 2023 at 11:00 AM",
      "Nov 18, 2023 at 11:00 AM",
      "Nov 19, 2023 at 11:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R16"
  },
  {
    .programme = "BCA",
    .semester = 1,
    .course_code = "Subject C",
    .councillor = "Gamma",
    .session_timing = {
      "Nov 4, 2023 at 1:00 PM",
      "Nov 5, 2023 at 1:00 PM",
      "Nov 11, 2023 at 1:00 PM",
      "Nov 12, 2023 at 1:00 PM",
      "Nov 18, 2023 at 1:00 PM",
      "Nov 19, 2023 at 1:00 PM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R18"
  },
    // semester 2 
  {
    .programme = "BCA",
    .semester = 2,
    .course_code = "Subject A2",
    .councillor = "Beta",
    .session_timing = {
      "Nov 4, 2023 at 9:00 AM",
      "Nov 5, 2023 at 9:00 AM",
      "Nov 11, 2023 at 9:00 AM",
      "Nov 12, 2023 at 9:00 AM",
      "Nov 18, 2023 at 9:00 AM",
      "Nov 19, 2023 at 9:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R1"
  },
  {
    .programme = "BCA",
    .semester = 2,
    .course_code = "Subject B2",
    .councillor = "Alpha",
    .session_timing = {
      "Nov 4, 2023 at 11:00 AM",
      "Nov 5, 2023 at 11:00 AM",
      "Nov 11, 2023 at 11:00 AM",
      "Nov 12, 2023 at 11:00 AM",
      "Nov 18, 2023 at 11:00 AM",
      "Nov 19, 2023 at 11:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R1"
  },
  {
    .programme = "BCA",
    .semester = 2,
    .course_code = "Subject C2",
    .councillor = "Theta",
    .session_timing = {
      "Nov 4, 2023 at 1:00 PM",
      "Nov 5, 2023 at 1:00 PM",
      "Nov 11, 2023 at 1:00 PM",
      "Nov 12, 2023 at 1:00 PM",
      "Nov 18, 2023 at 1:00 PM",
      "Nov 19, 2023 at 1:00 PM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R1"
  },
    // semester 3 
  {
    .programme = "BCA",
    .semester = 3,
    .course_code = "Subject A3",
    .councillor = "Pi",
    .session_timing = {
      "Nov 4, 2023 at 9:00 AM",
      "Nov 5, 2023 at 9:00 AM",
      "Nov 11, 2023 at 9:00 AM",
      "Nov 12, 2023 at 9:00 AM",
      "Nov 18, 2023 at 9:00 AM",
      "Nov 19, 2023 at 9:00 AM"
    },
    .total_sessions = 3,
    .session_duration = 2,
    .venue = "ABC College F3 R12"
  },
  {
    .programme = "BCA",
    .semester = 3,
    .course_code = "Subject B3",
    .councillor = "Pi",
    .session_timing = {
      "Nov 4, 2023 at 11:00 AM",
      "Nov 5, 2023 at 11:00 AM",
      "Nov 11, 2023 at 11:00 AM",
      "Nov 12, 2023 at 11:00 AM",
      "Nov 18, 2023 at 11:00 AM",
      "Nov 19, 2023 at 11:00 AM"
    },
    .total_sessions = 3,
    .session_duration = 2,
    .venue = "ABC College F3 R12"
  },
  {
    .programme = "BCA",
    .semester = 3,
    .course_code = "Subject C3",
    .councillor = "Pi",
    .session_timing = {
      "Nov 4, 2023 at 1:00 AM",
      "Nov 5, 2023 at 1:00 AM",
      "Nov 11, 2023 at 1:00 AM",
      "Nov 12, 2023 at 1:00 AM",
      "Nov 18, 2023 at 1:00 AM",
      "Nov 19, 2023 at 1:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F3 R12"
  },
    // assuming we have only 3 semesters 
    // and for MCA also we'll use the same dataset 
};

// Size of LSCs dataset 
int SIZE_OF_COUNSELLING_SCHEDULE_BCA_DATASET = sizeof(councelling_schedule_BCA_dataset) / sizeof(councelling_schedule_BCA_dataset[0]);


// This is not real data this is made on the basis of assumptions only 
struct CounsellingSchedule councelling_schedule_MCA_dataset[] = {
    // semester 1 
  {
    .programme = "MCA",
    .semester = 1,
    .course_code = "Subject A",
    .councillor = "Alpha",
    .session_timing = {
      "Nov 4, 2023 at 9:00 AM",
      "Nov 5, 2023 at 9:00 AM",
      "Nov 11, 2023 at 9:00 AM",
      "Nov 12, 2023 at 9:00 AM",
      "Nov 18, 2023 at 9:00 AM",
      "Nov 19, 2023 at 9:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R16"
  },
  {
    .programme = "MCA",
    .semester = 1,
    .course_code = "Subject B",
    .councillor = "Beta",
    .session_timing = {
      "Nov 4, 2023 at 11:00 AM",
      "Nov 5, 2023 at 11:00 AM",
      "Nov 11, 2023 at 11:00 AM",
      "Nov 12, 2023 at 11:00 AM",
      "Nov 18, 2023 at 11:00 AM",
      "Nov 19, 2023 at 11:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R16"
  },
  {
    .programme = "MCA",
    .semester = 1,
    .course_code = "Subject C",
    .councillor = "Gamma",
    .session_timing = {
      "Nov 4, 2023 at 1:00 PM",
      "Nov 5, 2023 at 1:00 PM",
      "Nov 11, 2023 at 1:00 PM",
      "Nov 12, 2023 at 1:00 PM",
      "Nov 18, 2023 at 1:00 PM",
      "Nov 19, 2023 at 1:00 PM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R18"
  },
    // semester 2 
  {
    .programme = "MCA",
    .semester = 2,
    .course_code = "Subject A2",
    .councillor = "Beta",
    .session_timing = {
      "Nov 4, 2023 at 9:00 AM",
      "Nov 5, 2023 at 9:00 AM",
      "Nov 11, 2023 at 9:00 AM",
      "Nov 12, 2023 at 9:00 AM",
      "Nov 18, 2023 at 9:00 AM",
      "Nov 19, 2023 at 9:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R1"
  },
  {
    .programme = "MCA",
    .semester = 2,
    .course_code = "Subject B2",
    .councillor = "Alpha",
    .session_timing = {
      "Nov 4, 2023 at 11:00 AM",
      "Nov 5, 2023 at 11:00 AM",
      "Nov 11, 2023 at 11:00 AM",
      "Nov 12, 2023 at 11:00 AM",
      "Nov 18, 2023 at 11:00 AM",
      "Nov 19, 2023 at 11:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R1"
  },
  {
    .programme = "MCA",
    .semester = 2,
    .course_code = "Subject C2",
    .councillor = "Theta",
    .session_timing = {
      "Nov 4, 2023 at 1:00 PM",
      "Nov 5, 2023 at 1:00 PM",
      "Nov 11, 2023 at 1:00 PM",
      "Nov 12, 2023 at 1:00 PM",
      "Nov 18, 2023 at 1:00 PM",
      "Nov 19, 2023 at 1:00 PM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F2 R1"
  },
    // semester 3 
  {
    .programme = "MCA",
    .semester = 3,
    .course_code = "Subject A3",
    .councillor = "Pi",
    .session_timing = {
      "Nov 4, 2023 at 9:00 AM",
      "Nov 5, 2023 at 9:00 AM",
      "Nov 11, 2023 at 9:00 AM",
      "Nov 12, 2023 at 9:00 AM",
      "Nov 18, 2023 at 9:00 AM",
      "Nov 19, 2023 at 9:00 AM"
    },
    .total_sessions = 3,
    .session_duration = 2,
    .venue = "ABC College F3 R12"
  },
  {
    .programme = "MCA",
    .semester = 3,
    .course_code = "Subject B3",
    .councillor = "Pi",
    .session_timing = {
      "Nov 4, 2023 at 11:00 AM",
      "Nov 5, 2023 at 11:00 AM",
      "Nov 11, 2023 at 11:00 AM",
      "Nov 12, 2023 at 11:00 AM",
      "Nov 18, 2023 at 11:00 AM",
      "Nov 19, 2023 at 11:00 AM"
    },
    .total_sessions = 3,
    .session_duration = 2,
    .venue = "ABC College F3 R12"
  },
  {
    .programme = "MCA",
    .semester = 3,
    .course_code = "Subject C3",
    .councillor = "Pi",
    .session_timing = {
      "Nov 4, 2023 at 1:00 AM",
      "Nov 5, 2023 at 1:00 AM",
      "Nov 11, 2023 at 1:00 AM",
      "Nov 12, 2023 at 1:00 AM",
      "Nov 18, 2023 at 1:00 AM",
      "Nov 19, 2023 at 1:00 AM"
    },
    .total_sessions = 6,
    .session_duration = 2,
    .venue = "ABC College F3 R12"
  },
    // assuming we have only 3 semesters 
};

// Size of COUNSELLING SCHEDULE dataset 
int SIZE_OF_COUNSELLING_SCHEDULE_MCA_DATASET = sizeof(councelling_schedule_MCA_dataset) / sizeof(councelling_schedule_MCA_dataset[0]);


// This is made on the basis of assumptions 
struct Councillor councillors_dataset[] = {
  {
    .programme = "BCA",
    .name = "Alpha",
    .phone = "9876543210"
  },
  {
    .programme = "MCA",
    .name = "Beta",
    .phone = "9876543211"
  },
  {
    .programme = "B. Tech",
    .name = "Gamma",
    .phone = "9876543222"
  },
  {
    .programme = "M. Tech",
    .name = "Delta",
    .phone = "9876543333"
  },
  {
    .programme = "BBA",
    .name = "Epsilon",
    .phone = "9876544444"
  },
  {
    .programme = "MBA",
    .name = "Iota",
    .phone = "9876555555"
  },
};

// Size of COUNSELLORS_DATASET dataset 
int SIZE_OF_COUNSELLORS_DATASET = sizeof(councillors_dataset) / sizeof(councillors_dataset[0]);


// This assignment submission schedule is made on the basis of assumptions only 
struct AssignmentSubmissionSchedule assignment_submission_schedule[] = {
  {
    .programme = "BCA",
    .submission_date = "Oct 31, 2023",
    .link = "http://link.com/submit/BCA/assignment/here",
    .note = "Submit assignment in PDF format with size less then 30MB"
  },
  {
    .programme = "MCA",
    .submission_date = "Oct 31, 2023",
    .link = "http://link.com/submit/MCA/assignment/here",
    .note = "Submit assignment in PDF format with size less then 30MB"
  },
  {
    .programme = "B. Tech",
    .submission_date = "Oct 31, 2023",
    .link = "http://link.com/submit/BTech/assignment/here",
    .note = "Submit assignment in PDF format with size less then 30MB"
  },
  {
    .programme = "M. Tech",
    .submission_date = "Oct 31, 2023",
    .link = "http://link.com/submit/MTech/assignment/here",
    .note = "Submit assignment in PDF format with size less then 30MB"
  },
  {
    .programme = "BBA",
    .submission_date = "Oct 31, 2023",
    .link = "http://link.com/submit/BBA/assignment/here",
    .note = "Submit assignment in PDF format with size less then 30MB"
  },
  {
    .programme = "MBA",
    .submission_date = "Oct 31, 2023",
    .link = "http://link.com/submit/MBA/assignment/here",
    .note = "Submit assignment in PDF format with size less then 30MB"
  },
};

// Size of ASSIGNMENT SUBMISSION SCHEDULE DATASET 
int SIZE_OF_ASSIGNMENT_SUBMISSION_SCHEDULE_DATASET = sizeof(assignment_submission_schedule) / sizeof(assignment_submission_schedule[0]);
